Rephrased:

### Introduction

In this project, we delve into the world of Makefiles and how they streamline the process of compiling code. We'll cover what `make` and Makefiles are, their significance, and how to utilize them efficiently. Additionally, we'll explore concepts such as rules, variables, and the most common ones used in Makefiles.

### Requirements

- **Editors**: Use `vi`, `vim`, or `emacs`.
- **Operating System**: Ubuntu 20.04 LTS.
- **GCC Version**: 9.3.0.
- **Make Version**: GNU Make 4.2.1.
- **File Conventions**: All files should end with a new line.
- **README.md**: A mandatory file at the root of the project folder.

### Tasks

#### Task 0: make -f 0-Makefile

**Objective**: Create your first Makefile.

**Requirements**:
- **Executable Name**: `school`.
- **Rules**: Define the `all` rule to build the executable.
- **Variables**: None.

#### Task 1: make -f 1-Makefile

**Objective**: Enhance the previous Makefile.

**Requirements**:
- **Executable Name**: `school`.
- **Rules**: Define the `all` rule to build the executable.
- **Variables**: `CC` (compiler), `SRC` (source files).

#### Task 2: make -f 2-Makefile

**Objective**: Create a more comprehensive Makefile.

**Requirements**:
- **Executable Name**: `school`.
- **Rules**: Define the `all` rule to build the executable.
- **Variables**: `CC` (compiler), `SRC` (source files), `OBJ` (object files), `NAME` (executable name).
- **Behavior**: The `all` rule should recompile only updated source files.

#### Task 3: make -f 3-Makefile

**Objective**: Develop a Makefile with additional rules.

**Requirements**:
- **Executable Name**: `school`.
- **Rules**: Define `all`, `clean`, `oclean`, `fclean`, and `re`.
- **Variables**: `CC` (compiler), `SRC` (source files), `OBJ` (object files), `NAME` (executable name), `RM` (file deletion).
- **Behavior**: The `all` rule should recompile only updated source files.

#### Task 4: A Complete Makefile

**Objective**: Build a Makefile covering all essential rules.

**Requirements**:
- **Executable Name**: `school`.
- **Rules**: Define `all`, `clean`, `fclean`, `oclean`, and `re`.
- **Variables**: `CC` (compiler), `SRC` (source files), `OBJ` (object files), `NAME` (executable name), `RM` (file deletion), `CFLAGS` (compiler flags).
- **Behavior**: The `all` rule should recompile only updated source files.

#### Task 5: Island Perimeter

**Objective**: Create a Python function to calculate the perimeter of an island.

**Requirements**:
- **Function**: `def island_perimeter(grid):`.
- **Grid Description**: List of lists with 0 for water and 1 for land.
- **Perimeter Calculation**: Determine the perimeter of the island described in the grid.

#### Task 6: make -f 100-Makefile

**Objective**: Develop an advanced Makefile.

**Requirements**:
- **Executable Name**: `school`.
- **Rules**: Define `all`, `clean`, `fclean`, `oclean`, and `re`.
- **Variables**: `CC` (compiler), `SRC` (source files), `OBJ` (object files), `NAME` (executable name), `RM` (file deletion), `CFLAGS` (compiler flags).
- **Behavior**: The `all` rule should recompile only updated source files.
- **Restrictions**: Use `$(RM)` for cleaning rules; the `RM` variable is not allowed to be set. Use `$(CC)` and `$(RM)` strings sparingly. Do not use `$(CFLAGS)` string. The Makefile should work even if a file in the folder has the same name as one of the rules.

This project will enhance your understanding of Makefiles and their practical applications in compiling code efficiently.