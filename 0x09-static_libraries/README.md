## Static Libraries in the 0x09-static_libraries Project

### Overview
A static library is a collection of object files (.o files) that are bundled together. It allows you to package and distribute reusable code, making it easier to manage and share functionality across different programs. In this project, we explore the concept of static libraries and learn how to create and use them.

### Basic Commands
To work with static libraries, we use several basic commands:

1. `ar`: The `ar` command is used to create and manipulate static libraries. It can be used to add object files to a library, among other operations.

2. `ranlib`: The `ranlib` command is used to generate an index for a static library. While it's not always necessary, it can improve library performance.

3. `nm`: The `nm` command is used to list the symbols (functions and variables) stored in a static library. This helps you inspect the contents of the library.

### Folder Contents
All files in this project folder have been made executable to facilitate execution.

### Project Tasks

#### Task 0: Creating a Static Library
- In this task, we create a static library called `libholberton.a`, which contains various functions.
- These functions include:
    - `_putchar`
    - `_islower`
    - `_isalpha`
    - `_abs`
    - `_isupper`
    - `_isdigit`
    - `_strlen`
    - `_puts`
    - `_strcpy`
    - `_atoi`
    - `_strcat`
    - `_strncat`
    - `_strncpy`
    - `_strcmp`
    - `_memset`
    - `_memcpy`
    - `_strchr`
    - `_strspn`
    - `_strpbrk`
    - `_strstr`
- The header file `holberton.h` contains prototypes for these functions.
- Steps to create the static library:
    1. Compile all `.c` files to obtain object files (`.o` files): `gcc -c *.c`
    2. Create the static library from the object files: `ar rc libholberton.a *.o`
    3. Verify that the static library was created successfully: `ar -t libholberton.a`
    4. Check if the object files were linked successfully: `nm libholberton.a`
- To compile the main code for testing, use: `gcc -std=gnu89 main.c -L. -lholberton -o quote`

#### Task 1: Creating a Library from All `.c` Files
- In this task, a script named `create_static_lib.sh` is created.
- The script generates a library called `liball.a` from all the `.c` files in the current directory.

### Note: Creating a Static Library
- To create a static library:
    1. Compile the `.c` files into object files (`.o`): `gcc -c *.c`
    2. Use `ar` to create the library: `ar rcs libmy.a *.o`
    3. Optionally, use `ranlib` to add an index: `ranlib libmy.a`
- To compile and test with the static library, use: `gcc -std=gnu89 main.c -L. -lmy -o new_file_name`