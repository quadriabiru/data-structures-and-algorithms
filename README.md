# REPO I MADE TO STORE KNOWLEDGE FROM MY DATA STRUCTURES AND ALGORITHMS CLASS FOR FUTURE REFERENCE 

**Algorithm:** repeatable steps used to solve a problem in a finite amount of time

**Data structure:** how data is organized in computer memory e.g array, list, tree, table etc.

# SEARCH ALGORITHMS
- Search algo #1: Linear search
    - Loop through data structure e.g. array one by one and perform comparison
    - O(n) - time complexity
    - O(1) - space complexity

- Search algo #2: Binary search
    - For searching for an element in a **sorted** array by repeatedly chopping search area in half
    - O(log n) - time complexity
    - O(1) - space complexity
    - Can use an iterative or recurssive approach <br>
      **- STEPS:**
     1. ALWAYS start from middle 
     2. Check middle element:
        <br> if mid element > target, then target in the left half
        <br> else if mid element < target, then target in the right half
        <br> call function on itself and adjust start and end points

# SORT ALGORITHMS
- Bogo (ABSOLUTE NO)
    worst-case time: never ends/infinite O(infinity)
    best-case time: instant -> O(1)

- Bubble: double for, make n-1 passes, compare neighbors, swap if out of order
    worst-case time: O(n^2)
    space compexity = O(1) 

- Insertion: double for, make n-1 passes, swap arr[1] with arr[i-1] if arr[i-1] > arr[i]
    time complexity: O(n^2)
    space complexity: O(1)

** Divide-and-conquer sorting **
1. Divide problem into smaller parts
2. Independently solve each part
3. Combine the solutions

- Merge: Divide array into two halves, recursively sort left and right halves, then merge two halves.

- Quick: Partition array into small and right items relative to pivot, the recursively sort the halves.

# RCURSION
1. Always have exit condition
2. Any place that has an unknown number of nested elements can use recursion
3. Define base case & recursive case


# DATA TYPES
- Data type #1: Stack
    - Can create, destroy, push, pop, is_empty
    - O(1) - time complexity (all operations take the same time)
    - O(n) - space complexity (n stack space is created for n objects)
    - LIFO - Last In First Out
    - **NB:** Max size of stack must be defined on init and cannot be changed. 
    - e.g. converting infix to post fix
