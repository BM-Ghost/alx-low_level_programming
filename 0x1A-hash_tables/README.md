# 🗃️ Hash Table Implementation in C

This repository offers a straightforward implementation of a hash table in the C programming language.

## Usage

To integrate the hash table implementation into your codebase, follow these steps:

1. Copy the `hash_table.h` and `hash_table.c` files to your project directory.
2. Include the `hash_table.h` header file in your code using `#include "hash_table.h"`.
3. Create a new hash table by invoking the `create_hash_table()` function and providing the desired size of the hash table:

    ```c
    struct hash_table* ht = create_hash_table(size);
    ```

4. Insert key-value pairs into the hash table using the `insert()` function:

    ```c
    insert(ht, "key", "value");
    ```

5. Retrieve values from the hash table using the `get()` function:

    ```c
    char* value = get(ht, "key");
    ```

6. Delete key-value pairs from the hash table using the `delete()` function:

    ```c
    delete(ht, "key");
    ```

## Functions

### `struct hash_table* create_hash_table(int size)`

Creates a new hash table with the specified size and returns a pointer to the new hash table.

### `void insert(struct hash_table* ht, char* key, char* value)`

Inserts a new key-value pair into the hash table.

### `char* get(struct hash_table* ht, char* key)`

Retrieves the value associated with the specified key from the hash table.

### `void delete(struct hash_table* ht, char* key)`

Deletes the key-value pair associated with the specified key from the hash table.

