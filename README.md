# Data Structures and Algorithms

Understanding the fundamentals of data structures and algorithms is crucial for efficient programming and problem-solving. This section provides a comprehensive overview of key concepts, techniques, and considerations in this field.

I initially made this repository private to serve as personal notes for my DSA class; however, I got some positive feedback when I shared it with firends and study groups so I decided to tidy it up and make it an open knowledge base.

## Algorithm Complexity: A Simple Legend

Before diving into algorithms, it's important to understand **time complexity** and **space complexity**. These terms describe how an algorithm performs as the size of the input increases.

### **Time Complexity**
- **O(1)**: Constant time – the algorithm takes the same amount of time, no matter the size of the input.
- **O(n)**: Linear time – time grows directly with the size of the input (e.g., if input doubles, time doubles).
- **O(n²)**: Quadratic time – time grows with the square of the input size (e.g., if input doubles, time quadruples).
- **O(log n)**: Logarithmic time – time increases slowly even as input size grows (e.g., doubling the input adds only a small extra time).
- **O(n log n)**: Log-linear time – a mix of linear and logarithmic growth, typically faster than O(n²).

### **Space Complexity**
- **O(1)**: Constant space – the algorithm uses a fixed amount of memory, regardless of input size.
- **O(n)**: Linear space – memory usage grows with the size of the input.
- **O(n²)**: Quadratic space – memory usage grows with the square of the input size.

---

## Algorithms
An **algorithm** is a sequence of repeatable steps designed to solve a specific problem within a finite amount of time. Algorithms can range from simple arithmetic operations to complex processes involving multiple data structures.

---

## Search Algorithms

### 1. Linear Search
- **Description**: Scans through elements one by one.
- **Steps**:
  1. Start at the first element.
  2. Compare the target value with each element.
  3. If a match is found, return the index.
  4. If no match is found after scanning all elements, return "not found."
- **Time Complexity**: O(n) – Each element must be checked.
- **Space Complexity**: O(1) – Only a few extra variables are needed.

### 2. Binary Search
- **Description**: Efficiently searches for an element in a **sorted** array by repeatedly dividing the search interval in half.
- **Steps**:
  1. Find the middle element of the array.
  2. If the middle element equals the target, return the index.
  3. If the target is less than the middle element, repeat the search in the left half.
  4. If the target is greater, search the right half.
  5. Repeat until the target is found or the interval is empty.
- **Time Complexity**: O(log n) – Each step halves the search space.
- **Space Complexity**: O(1) – A few pointers and variables are used.

---

## Sorting Algorithms

### 1. Bogo Sort
- **Description**: Randomly shuffles the array until it's sorted (highly inefficient and impractical).
- **Steps**:
  1. Shuffle the array randomly.
  2. Check if it's sorted.
  3. If not sorted, repeat step 1.
- **Time Complexity**: O(∞) – It could theoretically go on forever.
- **Best Case**: O(1) – The array happens to be sorted in the first try.

### 2. Bubble Sort
- **Description**: Repeatedly compares adjacent elements and swaps them if they are in the wrong order.
- **Steps**:
  1. Compare the first two elements. If the first is greater, swap them.
  2. Move to the next pair and repeat.
  3. After one pass through the array, the largest element is "bubbled" to the correct position.
  4. Repeat for all elements, ignoring the last sorted ones.
- **Time Complexity**: 
  - Best Case: O(n) – If the array is already sorted.
  - Worst Case: O(n²) – If the array is completely reversed.
- **Space Complexity**: O(1) – Sorting is done in place with no extra memory.

### 3. Insertion Sort
- **Description**: Builds a sorted array by repeatedly inserting elements into the correct position.
- **Steps**:
  1. Start with the second element, compare it to the first.
  2. Insert it into its correct position relative to the first.
  3. Repeat for each subsequent element, inserting it into the already sorted portion.
- **Time Complexity**:
  - Best Case: O(n) – If the array is already sorted.
  - Worst Case: O(n²) – If the array is sorted in reverse.
- **Space Complexity**: O(1) – Sorts the array in place.

### 4. Merge Sort
- **Description**: A divide-and-conquer algorithm that divides the array into halves, sorts each half, and merges them back together.
- **Steps**:
  1. Divide the array into two halves.
  2. Recursively sort both halves.
  3. Merge the two sorted halves back into one.
- **Time Complexity**: O(n log n) – Dividing the array takes log n steps, and merging takes O(n).
- **Space Complexity**: O(n) – Requires additional memory to store the divided halves.

### 5. Quick Sort
- **Description**: Another divide-and-conquer algorithm that selects a "pivot" element and partitions the array into elements less than and greater than the pivot.
- **Steps**:
  1. Choose a pivot element.
  2. Partition the array around the pivot, so that all elements less than the pivot are on one side and all elements greater are on the other.
  3. Recursively sort the sub-arrays.
- **Time Complexity**:
  - Best Case: O(n log n) – The pivot divides the array evenly.
  - Worst Case: O(n²) – If the pivot is always the smallest or largest element (bad pivot selection).
- **Space Complexity**: O(log n) – In the best case, the recursion depth is logarithmic.

---

## Data Structures
A **data structure** defines how data is organized, stored, and manipulated in computer memory. Common examples include:
- **Arrays**: A collection of elements identified by index or key.
- **Linked Lists**: A sequence of elements where each element points to the next.
- **Trees**: A hierarchical structure with nodes connected by edges.
- **Tables**: A structured format that organizes data in rows and columns.

---

## Recursion
Recursion is a powerful technique where a function calls itself to solve smaller instances of the same problem. Key points include:
1. Always define an exit condition to prevent infinite recursion.
2. Utilize recursion in scenarios with an unknown number of nested elements.
3. Clearly distinguish between the base case (termination) and the recursive case (the call itself).

---

By exploring these concepts, you'll gain a solid foundation in data structures and algorithms, essential for any aspiring programmer or software engineer.
