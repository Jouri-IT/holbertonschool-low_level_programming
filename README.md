# holbertonschool-low_level_programming

low-level C projects covering the C compilation pipeline, pointers, memory management, recursion, structures, function pointers, linked lists, hash tables, and file i/o.

---

## overview

each folder is a standalone project focused on one systems-programming concept, with tasks numbered in the order they were assigned. all code follows the holberton C style guide (betty-style: tabs, header comments, `_` prefix on custom standard-library reimplementations) and compiles cleanly with strict gcc flags.

---

## tech stack

* C (gnu89)
* gcc, with `-Wall -Werror -Wextra -pedantic -std=gnu89`
* `man` / `valgrind` for debugging memory issues
* betty style checker

---

## repo structure

| folder | concept |
| --- | --- |
| [`hello_world`](#hello_world) | the C compilation pipeline — preprocessor, compiler, assembler, linker |
| [`variables_if_else_while`](#variables_if_else_while) | variables, conditionals, while loops |
| [`functions_nested_loops`](#functions_nested_loops) | functions, nested loops |
| [`more_functions_nested_loops`](#more_functions_nested_loops) | more functions and nested loops *(incomplete)* |
| [`pointers_arrays_strings`](#pointers_arrays_strings) | pointers, arrays, and custom string functions |
| [`recursion`](#recursion) | recursive functions |
| [`structures_typedef`](#structures_typedef) | structs and `typedef` |
| [`argc_argv`](#argc_argv) | command-line arguments |
| [`malloc_free`](#malloc_free) | dynamic memory allocation |
| [`more_malloc_free`](#more_malloc_free) | more dynamic memory allocation |
| [`function_pointers`](#function_pointers) | pointers to functions |
| [`variadic_functions`](#variadic_functions) | functions with a variable number of arguments |
| [`singly_linked_lists`](#singly_linked_lists) | singly linked list implementation |
| [`doubly_linked_lists`](#doubly_linked_lists) | doubly linked list implementation |
| [`hash_tables`](#hash_tables) | hash table implementation (djb2 hashing, chaining) |
| [`file_io`](#file_io) | reading, writing, and copying files at the system call level |

---

## hello_world

the four stages a C file goes through before it runs: preprocessing, compiling, assembling, linking.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-preprocessor` | shell script that preprocesses a `.c` file (`gcc -E`) |
| `1-compiler` | shell script that compiles a `.c` file without linking (`gcc -c`) |
| `2-assembler` | shell script that generates assembly from a `.c` file (`gcc -S`) |
| `3-name` | shell script that compiles and links a `.c` file into an executable named `cisfun` |
| `4-puts.c` | prints `"Programming, Best job in the world!"` using `puts` |
| `5-printf.c` | prints the same string using `printf` |
| `6-size.c` | prints the size in bytes of various C types |

</details>

---

## variables_if_else_while

basic variables, conditionals, and while loops.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-positive_or_negative.c` | prints whether a random number is positive, negative, or zero |
| `1-last_digit.c` | prints the last digit of a random number and classifies it |
| `2-print_alphabet.c` | prints the lowercase alphabet |
| `3-print_alphabets.c` | prints lowercase then uppercase alphabet |
| `4-print_alphabt.c` | prints the alphabet skipping 'q' |
| `5-print_numbers.c` | prints numbers 0-9 |
| `6-print_numberz.c` | prints numbers 0-9 without declaring any variables besides the loop counter |
| `7-print_tebahpla.c` | prints the alphabet in reverse |
| `8-print_base16.c` | prints 0-9 then 0-9 in hexadecimal |
| `9-print_comb.c` | prints all single-digit numbers, comma-separated |

</details>

---

## functions_nested_loops

writing reusable functions and nesting loops.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-putchar.c` | prints `'H'` followed by a new line using `_putchar` |
| `1-alphabet.c` | `print_alphabet()` — prints the lowercase alphabet |
| `2-print_alphabet_x10.c` | `print_alphabet_x10()` — prints the alphabet 10 times |
| `3-islower.c` | `_islower(c)` — checks for a lowercase character |
| `4-isalpha.c` | `_isalpha(c)` — checks for an alphabetic character |
| `5-sign.c` | `print_sign(n)` — prints whether a number is positive, negative, or zero |
| `6-abs.c` | `_abs(n)` — computes the absolute value of an integer |
| `7-print_last_digit.c` | `print_last_digit(n)` — prints the last digit of a number |
| `8-24_hours.c` | `jack_bauer()` — prints every minute of the day from 00:00 to 23:59 |
| `9-times_table.c` | `times_table(n)` — prints the n times table, starting with 0 |
| `10-add.c` | `add(a, b)` — adds two integers |
| `11-print_to_98.c` | `print_to_98(n)` — prints all natural numbers from n to 98 |

</details>

---

## more_functions_nested_loops

> ⚠️ this folder is incomplete — only `main.h` exists, and the one implementation in it (`_isupper`) ended up written directly inside the header instead of its own `.c` file. worth finishing or removing before making the repo public.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `main.h` | header declaring `_isupper`; the function body is (incorrectly) implemented here instead of in a separate `.c` file |

</details>

---

## pointers_arrays_strings

pointer arithmetic and reimplementing standard string/memory functions.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-memset.c` | `_memset(s, b, n)` — fills memory with a constant byte |
| `1-memcpy.c` | `_memcpy(dest, src, n)` — copies a memory area |
| `2-strchr.c` | `_strchr(s, c)` — locates a character in a string |
| `3-strspn.c` | `_strspn(s, accept)` — gets the length of a prefix substring |
| `4-strpbrk.c` | `_strpbrk(s, accept)` — searches a string for any of a set of bytes |
| `5-strstr.c` | `_strstr(haystack, needle)` — locates a substring |
| `7-print_chessboard.c` | prints an 8x8 chessboard using a 2d array |
| `8-print_diagsums.c` | prints the sum of both diagonals of a square matrix |

</details>

---

## recursion

solving problems with recursive functions instead of loops.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-puts_recursion.c` | `_puts_recursion(s)` — prints a string recursively |
| `1-print_rev_recursion.c` | `_print_rev_recursion(s)` — prints a string in reverse, recursively |
| `2-strlen_recursion.c` | `_strlen_recursion(s)` — returns a string's length, recursively |
| `3-factorial.c` | `factorial(n)` — returns n's factorial, recursively |
| `4-pow_recursion.c` | `_pow_recursion(x, y)` — returns x to the power of y, recursively |
| `5-sqrt_recursion.c` | `_sqrt_recursion(n)` — returns the natural square root of n, or -1 if none exists |
| `6-is_prime_number.c` | `is_prime_number(n)` — checks if a number is prime, recursively |

</details>

---

## structures_typedef

defining and working with a `struct dog` / `dog_t` typedef.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `dog.h` | defines `struct dog` / `dog_t` (name, age, owner) |
| `1-init_dog.c` | `init_dog(d, name, age, owner)` — initializes a `struct dog` |
| `2-print_dog.c` | `print_dog(d)` — prints a `struct dog`'s fields |
| `4-new_dog.c` | `new_dog(name, age, owner)` — dynamically allocates and returns a `dog_t` |
| `5-free_dog.c` | `free_dog(d)` — frees a dynamically allocated dog |

</details>

---

## argc_argv

reading and using command-line arguments.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-whatsmyname.c` | prints the program's own name |
| `1-args.c` | prints the number of arguments passed in |
| `2-args.c` | prints every argument passed in, one per line |
| `3-mul.c` | multiplies its two arguments together |
| `4-add.c` | adds up any number of positive-integer arguments |

</details>

---

## malloc_free

allocating and freeing memory on the heap.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-create_array.c` | `create_array(size, c)` — creates and fills a char array |
| `1-strdup.c` | `_strdup(str)` — duplicates a string into newly allocated memory |
| `2-str_concat.c` | `str_concat(s1, s2)` — concatenates two strings into a new allocation |
| `3-alloc_grid.c` | `alloc_grid(width, height)` — allocates a 2d grid of ints, zero-filled |
| `4-free_grid.c` | `free_grid(grid, height)` — frees a 2d grid |

</details>

---

## more_malloc_free

more allocation patterns — checked malloc, calloc, and bounded concatenation.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-malloc_checked.c` | `malloc_checked(b)` — mallocs memory, exits with status 98 on failure |
| `1-string_nconcat.c` | `string_nconcat(s1, s2, n)` — concatenates two strings, up to n bytes of the second |
| `2-calloc.c` | `_calloc(nmemb, size)` — custom implementation of `calloc` |
| `3-array_range.c` | `array_range(min, max)` — creates an array of integers from min to max, inclusive |

</details>

---

## function_pointers

passing functions around as pointers.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-print_name.c` | `print_name(name, f)` — prints a name using a function pointer |
| `1-array_iterator.c` | `array_iterator(array, size, action)` — runs a function on every array element |
| `2-int_index.c` | `int_index(array, size, cmp)` — finds the first element matching a comparison function |
| `3-get_op_func.c` / `3-op_functions.c` / `3-main.c` / `3-calc.h` | a tiny calculator: maps an operator string (`+ - * / %`) to the right function pointer and runs it |

</details>

---

## variadic_functions

functions that take a variable number of arguments.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-sum_them_all.c` | `sum_them_all(n, ...)` — returns the sum of all its arguments |
| `1-print_numbers.c` | `print_numbers(separator, n, ...)` — prints integers separated by a string |
| `2-print_strings.c` | `print_strings(separator, n, ...)` — prints strings separated by a string |
| `3-print_all.c` | `print_all(...)` — prints any sequence of arguments, format-string style |

</details>

---

## singly_linked_lists

building and operating on a singly linked list (`list_t`).

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-print_list.c` | `print_list(h)` — prints every element of a `list_t` list |
| `1-list_len.c` | `list_len(h)` — returns the number of elements in a list |
| `2-add_node.c` | `add_node(head, str)` — adds a new node at the start of the list |
| `3-add_node_end.c` | `add_node_end(head, str)` — adds a new node at the end of the list |
| `4-free_list.c` | `free_list(head)` — frees an entire list |

</details>

---

## doubly_linked_lists

building and operating on a doubly linked list (`dlistint_t`).

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-print_dlistint.c` | `print_dlistint(h)` — prints every element of a list |
| `1-dlistint_len.c` | `dlistint_len(h)` — returns the number of elements in a list |
| `2-add_dnodeint.c` | `add_dnodeint(head, n)` — adds a new node at the start |
| `3-add_dnodeint_end.c` | `add_dnodeint_end(head, n)` — adds a new node at the end |
| `4-free_dlistint.c` | `free_dlistint(head)` — frees an entire list |
| `5-get_dnodeint.c` | `get_dnodeint_at_index(head, index)` — returns the nth node |
| `6-sum_dlistint.c` | `sum_dlistint(head)` — sums all the data in a list |
| `7-insert_dnodeint.c` | `insert_dnodeint_at_index(head, idx, n)` — inserts a node at a given position |
| `8-delete_dnodeint.c` | `delete_dnodeint_at_index(head, idx)` — deletes the node at a given position |

</details>

---

## hash_tables

a hash table implemented from scratch using the djb2 hash function and chaining for collisions.

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-hash_table_create.c` | `hash_table_create(size)` — creates a hash table |
| `1-djb2.c` | `hash_djb2(str)` — implementation of the djb2 hash algorithm |
| `2-key_index.c` | `key_index(key, size)` — gets the array index for a key |
| `3-hash_table_set.c` | `hash_table_set(ht, key, value)` — adds or updates a key/value pair |
| `4-hash_table_get.c` | `hash_table_get(ht, key)` — retrieves the value for a key |
| `5-hash_table_print.c` | `hash_table_print(ht)` — prints a hash table's key/value pairs |
| `6-hash_table_delete.c` | `hash_table_delete(ht)` — frees an entire hash table |
| `100-sorted_hash_table.c` | `shash_table_create(size)` — a hash table variant that keeps keys in sorted order |

</details>

---

## file_io

reading from, writing to, and copying files using POSIX system calls (`open`, `read`, `write`, `close`).

<details>
<summary>tasks</summary>

| file | description |
| --- | --- |
| `0-read_textfile.c` | `read_textfile(filename, letters)` — reads a text file and prints it to stdout |
| `1-create_file.c` | `create_file(filename, text_content)` — creates a file and writes text to it |
| `2-append_text_to_file.c` | `append_text_to_file(filename, text_content)` — appends text to an existing file |
| `3-cp.c` | a mini `cp` utility — copies the content of one file to another |

</details>

---

## compiling

every task compiles standalone with the holberton-standard flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-example.c -o 0-example
```

for tasks split across multiple files (e.g. `function_pointers/3-*.c`), compile them together:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-get_op_func.c 3-op_functions.c -o calc
```

---

## before making this repo public

a couple of leftover artifacts from the original setup are worth cleaning up first:

* two stray files sit at the repo root — `2-strchr.c` and `main.h` — duplicates of files that belong inside `pointers_arrays_strings/`. safe to delete from the root.
* an empty nested folder, `holbertonschool-low_level_programming/`, appears to be a leftover from an early git init. safe to delete.
* `more_functions_nested_loops/` is incomplete (see note above) — worth finishing or removing the folder before sharing.
