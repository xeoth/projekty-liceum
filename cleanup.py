"""
Skrypt służący do usuwania wszystkich pozostałości po kompilacji (.exe, .out)
"""

import os

main_dir = '../projekty-liceum'  # katalog główny
unwanted_extensions = ('.exe', '.out')  # rozszerzenia plików do usunięcia
ignored_directories = ('../projekty-liceum/.git')  # ścieżki do katalogów, które mają być ignorowane


def remove_all_in_dir(path):
    for current_name in os.listdir(path):
        full_path = os.path.join(path, current_name)
        if os.path.isdir(full_path) and full_path not in ignored_directories:
            print(f'Entering: {full_path}')
            remove_all_in_dir(f'{full_path}')
        elif current_name.endswith(unwanted_extensions):
            print(f'Removed: {full_path}')
            os.remove(full_path)


remove_all_in_dir(main_dir)
