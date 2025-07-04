# Double Circular Linked List

![circular_linked_list](https://i.imgur.com/xW9ExsS.png);

This project implements a **double circular linked list** in C, following the structure and specifications given by Holberton School.

## 📁 Project Structure

```
holbertonschool-interview/
└── double_circular_linked_list/
    ├── 0-add_node.c
    ├── 0-main.c
    └── list.h
```

## 🧠 Objective

Implement functions to add nodes at the **beginning** and **end** of a **double circular linked list**.

## 🧱 Data Structure

```
/**
 * struct List - doubly linked list
 * @str: string - (malloc'ed string)
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct List
{
  char *str;
  struct List *prev;
  struct List *next;
} List;
```

## 🛠️ Tasks

### ✅ Task 0: Add Nodes

**File:** `0-add_node.c`

Create two functions to add a node to a double circular linked list.

### `add_node_end`

Add a new node **to the end** of the list.

```
List *add_node_end(List **list, char *str);
```

* **Parameters:**

  * `list`: Address of the list head
  * `str`: String to copy into the new node
* **Returns:** Address of the new node or `NULL` on failure

### `add_node_begin`

Add a new node **to the beginning** of the list.

```
List *add_node_begin(List **list, char *str);
```

* **Parameters:**

  * `list`: Address of the list head
  * `str`: String to copy into the new node
* **Returns:** Address of the new node or `NULL` on failure

## 🧪 Example Usage

In `0-main.c`, the program tests both functions:

```
add_node_end(&list, "Holberton");
add_node_end(&list, "School");
// ...

add_node_begin(&list, "Holberton");
add_node_begin(&list, "School");
// ...
```

Expected output:

```
Added to the end:
Holberton
    ->prev: Engineer
    ->next: School
School
    ->prev: Holberton
    ->next: Full
...
Added to the beginning:
Engineer
    ->prev: Holberton
    ->next: Stack
...
```

## 🧵 Compilation

```
gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-add_node.c -o list_test
./list_test
```

## 🗂️ Repository Info

* **GitHub repository:** `holbertonschool-interview`
* **Directory:** `double_circular_linked_list`
* **File:** `0-add_node.c`

## 📌 Notes

* The list is **circular**: the last node's `next` points to the head, and the head's `prev` points to the last node.
* Strings are duplicated using `malloc`.
* Proper memory management is expected (though freeing nodes is not shown in this example).
