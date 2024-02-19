REPO I MADE TO STORE KNOWLEDGE FROM MY DATA STRUCTURES AND ALGORITHMS CLASS FOR FUTURE REFERENCE 

Algorithm: repeatable steps used to solve a problem in a finite amount of time

Data structure: how data is organized in computer memory e.g array, list, tree, table etc.

# SEARCH ALGORITHMS
- Search algo #1: Linear search 
    Loop through data structure e.g. array one by one and perform comparison
    O(n) - time complexity
    O(1) - space complexity

- Search algo #2: Binary search
    For searching for an element in a sorted array by repeatedly chopping search area in half
     O(log n) - time complexity
     O(1) - space complexity
     - Can use an iterative or recurssive approach
     Steps:
     1. ALWAYS start from middle 
     2. Check middle element:
        if > target, target to the left half
        else if < target, target to the right half 

# SORT ALGORITHMS




# DATA TYPES
- Data type #1: Stack
    Can create, destroy, push, pop, is_empty
    O(1) - time complexity (all operations take the same time)
    O(n) - space complexity (n stack space is created for n objects)
    LIFO - Last In First Out
    Max size of stack must be defined on init and cannot be changed. 
    e.g. converting infix to post fix