# REPO I MADE TO STORE KNOWLEDGE FROM MY DATA STRUCTURES AND ALGORITHMS CLASS FOR FUTURE REFERENCE 

**Algorithm:** repeatable steps used to solve a problem in a finite amount of time

**Data structure:** how data is organized in computer memory e.g array, list, tree, table etc.

**Pointer:** variable that holds the memory address of another variable in bytes
- syntax: dtype* variable name e.g. int* x; char* z
- address of operator (&): returns memory address of its operand
- dereference operator (*): returns value stored at memory address
- arithmetic: two possible operations -> addition & subtraction
    - adding 1 is adding size of data type e.g. 1 bytes for char or 4 bytes for int

<figure 1: pointer arithmetic>

**Strings:** C-style string is an array of characters ending in '\0'

**Function Concepts:** when using functions in C++, parameters can be passed in 3 ways
- pass-by-value: value of argument is copied into function parameter and changes made to parameter in function have no effect on the actual argument

- pass-by-pointer: address of actual arguments are copied into the function parameters, changes made to value at pointer address is reflected globally

- pass-by-reference: to pass the reference of an argument in the calling function to the corresponding formal parameter of the called function. essentially assign the memory address of an argument to the function. 

**Program Memory:** divided into 4 parts:
- program code: holds compiled code of the program
- global variables:  remain in memoery as long as program continues
- stack: return address for function calls, local variables for functions etc. (aka static memory)
- heap: region of free memoery from which chinks of memory are allocated
    - C++ has new and delete operators for allocating and deallocating memory during run time

<figure 2: static vs dynamic memory>
<figure 3: static vs dynamic arrays>

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

# RCURSION
1. Always have exit condition
2. Any place that has an unknown number of nested elements can use recursion
3. Define base case & recursive case

- Merge: Divide array into two halves, recursively sort left and right halves, then merge two halves.

- Quick: Partition array into small and right items relative to pivot, the recursively sort the halves.

# CONSIDERATIONS
1. Data size
    - small data (<= 100), O(n^2) is fine e.g. bubble, insertion
    - large data, use O(nlog(n)) e.g. mergesort, quicksort

2. Prior knowledge about the data
    -  e.g., is the data partially sorted? consider insertion
    - does the data contain duplicates

3. Memory constrains
    - if memory is an issue, use algorithms that sort in place with O(1) e.g., insertion, bubble

# DATA TYPES
- Data type #1: Stack
    - Can create, destroy, push, pop, is_empty
    - O(1) - time complexity (all operations take the same time)
    - O(n) - space complexity (n stack space is created for n objects)
    - LIFO - Last In First Out
    - **NB:** Max size of stack must be defined on init and cannot be changed. 
    - e.g. converting infix to post fix

- Data type #2: Matrix (Regular and Sparse)
    - Two dimensional array defined as array[max_rows][max_columns]
    - Sparse matrix is one with too many 0s so important to convert to sparse notation

- Data type #3: List (Single and Double linked list)

- Data type #4: Queue

- Data type #5: Trees




