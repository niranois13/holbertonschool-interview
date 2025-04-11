## Linear Skip

![Linear_Skip](https://i.imgur.com/KSSDhoG.png)

### Task Overview
In this task, we implement a **linear search** in a **skip list** data structure. The skip list is a sorted linked list with **express lanes** that optimize search operations. These express lanes enable skipping over several nodes, making searches faster than a regular singly linked list.

---

### Function to Implement

```
skiplist_t *linear_skip(skiplist_t *list, int value);
```

- **Parameters:**
  - `list`: A pointer to the head of the skip list.
  - `value`: The integer value to search for.

- **Return:**
  - Pointer to the node where `value` is found or `NULL` if not found.

---

### Search Logic

- The skip list is **sorted in ascending order**.
- The **express lanes** are placed at every index which is a **multiple of the square root** of the size of the list.
- **Print every comparison** made during the search.
- Return a pointer to the first node where the value is found, or `NULL` if the value is not found or the head is `NULL`.

---

### Example

For a skip list with 16 nodes:
- **Express lanes** are at indices 0, 4, 8, 12 (because the square root of 16 is 4).
- The search will use these express lanes but perform **linear comparisons** to find the value.

---

### Constraints

- List is sorted in ascending order.
- Return `NULL` if the head is `NULL`.
- Print every value being compared to the target value during the search.
