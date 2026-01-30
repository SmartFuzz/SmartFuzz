import json
import os


def write2file(file_path, content):
    with open(file=file_path, mode='w', encoding='utf-8') as f:
        f.write(content)


def write2json(file_path, content):
    with open(file=file_path, mode='w', encoding='utf-8') as f:
        json.dump(content, f, ensure_ascii=False, indent=4)


def read_file(file_path):
    with open(file=file_path, mode='r', encoding='utf-8') as f:
        content = f.read()
    return content


def read_json(file_path):
    with open(file=file_path, mode='r', encoding='utf-8') as f:
        content = json.load(f)
    return content


def mkdir(dir_path):
    if not os.path.exists(dir_path):
        os.makedirs(dir_path)
