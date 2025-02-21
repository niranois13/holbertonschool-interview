# Linked List Cycle Detection  

![Cycle detection](https://i.imgur.com/s0HhCeX.png)

## Description  
This is a technical interview preparation task focused on detecting cycles in a singly linked list using C. The goal is to implement an efficient solution while following specific constraints on function usage.  

## Requirements  
- **Function Prototype:**  
  ```
  int check_cycle(listint_t *list);
  ```  
- **Return Value:**  
  - `0` if there is no cycle  
  - `1` if a cycle exists  

## Constraints  
- You are **not allowed** to use external resources (no Googling).  
- You must **whiteboard** your approach before coding.  
- The solution must be **efficient** in terms of runtime and memory usage.  
- The only allowed functions are:  
  - `write`, `printf`, `putchar`, `puts`, `malloc`, `free`  

## Compilation  
To compile the program, use:  
```
gcc -Wall -Werror -Wextra -pedantic *.c -o cycle_check
```

## Usage  
Run the executable and provide a test linked list to check for cycles.  

## Notes  
- Consider edge cases such as an empty list or a single-node list.  
- Focus on optimizing runtime and minimizing extra memory usage.  
