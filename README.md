# Bitnine_Q1

Arithmetic Operations & Fibonacci Sequence Program
--------------------------------------------------

This code implements a program for performing arithmetic operations and calculating the fibonacci sequence. The program uses a struct called "Node" to store information about the inputs for different operations. The Node struct has three fields:

-   type: an enumerated type "TypeTag" which can be one of ADD, SUB, MUL, DIV, or FIB
-   value1: a value used in the arithmetic operation
-   value2: another value used in the arithmetic operation

The function `makeFunc` is used to create a new Node object, allocate memory for it, and initialize its fields.

The `calculate` function takes a Node object and performs the operation specified by its type. For example, if its type is ADD, the function will perform the addition of value1 and value2 and print the result. If the type is FIB, the function will call the fibonacci function to calculate and return the fibonacci number at the specified index.

The main function creates four Node objects for ADD, MUL, SUB, and FIB operations and calls the `calculate` function on each of them. The program ends by freeing the memory for each of the Node objects.

The program also includes error handling for invalid input, memory allocation failures, and other error conditions. Error codes and error messages are defined for these scenarios.

# Bitnine_Q2

## 1.  Recursive Implementation

  Advantages:

  -   Simple to implement

  Disadvantages:

  -   Large amounts of repeated calculations
  -   Slow performance, as a result of repeated calculations
  -   Possibility of hitting maximum recursion depth



## 2.  Iterative Implementation

  Advantages:

  -   Fast performance, as there are no repeated calculations
  -   No maximum recursion depth limit

  Disadvantages:

  -   More complex to implement compared to the recursive approach



## 3.  Dynamic Programming Implementation

  Advantages:

  -   Fast performance, as there are no repeated calculations
  -   Memory efficient

  Disadvantages:

  -   More complex to implement compared to the recursive approach
  -   Memory management is required to ensure efficient use of memory

In conclusion, each of the three methods has its own advantages and disadvantages, and the choice of implementation method depends on the requirements of the specific problem. However, for large values of n, the iterative or dynamic programming approach is usually preferred over the recursive approach.

