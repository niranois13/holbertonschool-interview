# Heap Insert

![heap insert](https://i.imgur.com/SjIneRu.png)

## Overview
The Heap Insert algorithm is a fundamental operation used to maintain the heap property in a binary heap data structure. Heaps are commonly used in priority queues, sorting algorithms (like heapsort), and for efficient minimum or maximum element retrieval. 

### Types of Heaps
- **Max-Heap:** Each parent node is greater than or equal to its children.
- **Min-Heap:** Each parent node is less than or equal to its children.

The Heap Insert algorithm ensures that a new element can be added to the heap while preserving its properties.

---

## How It Works
1. **Insert the Element at the End:**
   - Add the new element to the first available position in the array representation of the heap (or the bottom level of the binary tree).

2. **Restore the Heap Property:**
   - Compare the new element with its parent.
   - If the heap property is violated (e.g., in a max-heap, the child is greater than the parent), swap the two elements.
   - Continue this process, often called "heapify up" or "bubble up," until the heap property is restored or the element becomes the root.

---

## Applications
- **Priority Queues:** Efficiently manage elements with different priorities.
- **Heapsort Algorithm:** Build and maintain heaps for efficient sorting.
- **Graph Algorithms:** Used in algorithms like Dijkstra's and Prim's for efficient edge selection.

---

## Complexity
- **Time Complexity:** O(log n) in the worst case, where *n* is the number of elements in the heap.
- **Space Complexity:** O(1), as the operation is performed in-place in the array representation of the heap.

---

## Example Scenario
Imagine managing tasks with different priorities. The Heap Insert algorithm allows you to efficiently add a new task while ensuring the highest priority task is always accessible.

---

## Key Points to Remember
- The algorithm preserves the complete binary tree property of heaps.
- The "heapify up" operation is key to maintaining the heap structure.
- The time complexity of O(log n) makes it efficient even for large datasets.

---

## Further Reading
- [Binary Heap](https://en.wikipedia.org/wiki/Binary_heap)
- [Priority Queue](https://en.wikipedia.org/wiki/Priority_queue)
- [Heapsort](https://en.wikipedia.org/wiki/Heapsort)

---

For more advanced topics and variations, explore Fibonacci heaps and binomial heaps, which offer optimized operations for specific use cases.
