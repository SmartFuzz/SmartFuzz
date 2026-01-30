// fuzz_wrapper.cpp
// Simple wrapper that reads the given file into memory and calls LLVMFuzzerTestOneInput.
// Usage: ./duck_fuzz_target <input-file>

#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <sys/stat.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size);

static bool read_file_mmap(const char *path, const uint8_t **out_ptr, size_t *out_size, void **map_handle) {
    *map_handle = nullptr;
    int fd = open(path, O_RDONLY);
    if (fd < 0) return false;
    struct stat st;
    if (fstat(fd, &st) != 0) { close(fd); return false; }
    size_t size = (size_t)st.st_size;
    if (size == 0) { close(fd); *out_ptr = nullptr; *out_size = 0; return true; }
    void *m = mmap(nullptr, size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (m == MAP_FAILED) { close(fd); return false; }
    close(fd);
    *out_ptr = (const uint8_t*)m;
    *out_size = size;
    *map_handle = m;
    return true;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <input-file>\n", argv[0]);
        return 1;
    }

    const char *fname = argv[1];
    const uint8_t *data = nullptr;
    size_t size = 0;
    void *map_handle = nullptr;

    if (!read_file_mmap(fname, &data, &size, &map_handle)) {
        // fallback to fread if mmap fails
        FILE *f = fopen(fname, "rb");
        if (!f) {
            fprintf(stderr, "Failed to open %s: %s\n", fname, strerror(errno));
            return 1;
        }
        fseek(f, 0, SEEK_END);
        size = ftell(f);
        fseek(f, 0, SEEK_SET);
        uint8_t *buf = (uint8_t*)malloc(size ? size : 1);
        if (!buf) { fclose(f); return 1; }
        if (size && fread(buf, 1, size, f) != size) { free(buf); fclose(f); return 1; }
        fclose(f);
        data = buf;
        map_handle = buf; // remember to free
    }

    // Call the libFuzzer-style entrypoint
    LLVMFuzzerTestOneInput(data, size);

    // cleanup
    if (map_handle) {
        // if mmap: unmap; if malloc fallback: free
        // Heuristic: if pointer is page-aligned, assume mmap
        uintptr_t p = (uintptr_t)map_handle;
        if ((p & 0xfff) == 0) {
            munmap(map_handle, size);
        } else {
            free(map_handle);
        }
    }

    return 0;
}