cmake_minimum_required(VERSION 3.5)
project(duck_fuzz_target LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Allow user to override compiler via environment, e.g.:
# CC=afl-clang-fast CXX=afl-clang-fast++ cmake ..
# or use -DCMAKE_C_COMPILER and -DCMAKE_CXX_COMPILER
# set(CMAKE_C_COMPILER afl-clang-fast)
set(CMAKE_CXX_COMPILER afl-clang-fast++)
set(CMAKE_CXX_COMPILER afl-clang-fast++)

set(CMAKE_C_FLAGS
    "${CMAKE_C_FLAGS} -fsanitize=address -fno-omit-frame-pointer"
)

set(CMAKE_CXX_FLAGS
    "${CMAKE_CXX_FLAGS} -fsanitize=address -fno-omit-frame-pointer"
)

set(CMAKE_EXE_LINKER_FLAGS
    "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address"
)

set(CMAKE_SHARED_LINKER_FLAGS
    "${CMAKE_SHARED_LINKER_FLAGS} -fsanitize=address")
# Add sources (replace fuzz_target.cpp with your implementation if needed)
add_executable(duck_fuzz_target
    fuzz_wrapper.cpp
    fuzz_target.cpp
)

add_executable(duck_fuzz_target_old
    fuzz_wrapper.cpp
    fuzz_target_old.cpp
)
add_executable(duck_fuzz_target_new
    fuzz_wrapper.cpp
    fuzz_target_new.cpp
)
# Link pthread if needed
find_package(Threads REQUIRED)

target_link_libraries(duck_fuzz_target_new PRIVATE Threads::Threads)

# If you need to link to DuckDB library, uncomment and adjust paths:

target_include_directories(duck_fuzz_target_new PRIVATE /usr/local/include)

target_link_libraries(duck_fuzz_target_new PRIVATE duckdb m)

