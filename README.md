# Cpp_Experiment_20_Searching_Algorithms

## Aim

To implement and understand the linear (sequential) search algorithm in C++ using arrays and vectors, and find a specific element in a collection of numbers.

## Objective

Learn how to search for an element in a list or array.

Compare the use of static arrays vs dynamic arrays (vectors).

Understand the working of linear search step by step.

Develop C++ programs to implement linear search in different ways.

Learn to handle cases when an element is found or not found.

## Theory 

### Introduction to Linear Search

Linear search, also known as sequential search, is the simplest searching technique in computer programming. It is used to find a particular element in a list, array, or collection of elements.

### How it works:
Linear search checks each element in sequence from the start to the end of the array.

If the element is found, it returns the index of the element.

If it reaches the end without finding the element, it indicates that the element is not present.

### Applications:

Searching for a name in a list of students.

Checking if a number exists in a small dataset.

Situations where the dataset is unsorted.

### Detailed Working of Linear Search
Step-by-Step Process

Start from the first element of the array.

Compare the current element with the target element (the element we are searching for).

If the element matches, stop the search and return the position.

If the element does not match, move to the next element.

Repeat steps 2-4 until either:

The element is found, or

The end of the array is reached.

If the end is reached without finding the target, report that the element is not found.

### Characteristics

Linear because it checks elements one by one.

Works for both sorted and unsorted arrays.

Time complexity: O(n), where n is the number of elements.

Space complexity: O(1), no extra memory is required for search.

### Advantages of Linear Search

Simple and easy to implement.

Works on unsorted data.

Requires no additional memory (for arrays).

Provides exact position of the element if found.

Can be easily modified to search in dynamic arrays or vectors.

### Disadvantages of Linear Search

Inefficient for large datasets, because it may check every element.

Time-consuming if the element is at the end or absent.

Not suitable for performance-critical applications with very large data.

Better searching algorithms like binary search or hashing are preferred for sorted or large datasets.

### Variations and Concepts Demonstrated:

### Program 1 (User Input Array)

Concepts: Static arrays, for loops, if-else conditions.

Explanation:

The user defines the size of the array and enters elements.

Each element is compared sequentially with the target value.

The program stops the loop once the element is found and prints the position.

If not found, it prints a message indicating the element is absent.

### Program 2 (Vector + Class Function)

Concepts: Dynamic arrays (vectors), classes, object-oriented programming, functions.

Explanation:

A class contains a search function that iterates through the vector.

Vectors allow dynamic sizing, making it easier to work with large or changing datasets.

The function returns the index if found, or -1 if not found.

Demonstrates reusable code and object-oriented principles.

### Program 3 (Predefined Array + Exit)

Concepts: Static arrays, for loops, immediate program termination using exit().

Explanation:
Uses a predefined array. The program iterates through the array to find the element.

If found, the program prints the index and immediately terminates, saving time by avoiding unnecessary comparisons.

If not found, a message indicates the element is absent.

### Program 4 (Predefined Array + Continue/Break)

Concepts: Static arrays, for loops, continue and break statements.

Explanation:

Iterates through a predefined array.

If the element is found, prints the index and breaks the loop.

If not, the loop uses continue to go to the next element.

Provides a clear demonstration of control flow statements in C++.

### Steps involved:

Start from the first element of the array.

Compare each element with the target value.

If a match is found, return the index of the element.

If the end of the array is reached without a match, return -1 (not found).

###  Advantages

Simple to implement.

Works for both sorted and unsorted arrays.

No extra memory required (for arrays).

### Disadvantages

Not efficient for large datasets (O(n) time complexity).

Comparisons may be high if the element is near the end or not present.

## Comparison Table 
| Feature       | Code 1                  | Code 2                              | Code 3                              | Code 4                              |
| ------------- | ----------------------- | ----------------------------------- | ----------------------------------- | ----------------------------------- |
| Array Type    | Static array            | Dynamic array (`vector`)            | Static array                        | Static array                        |
| Input         | User-defined array size | Predefined array, user input target | Predefined array, user input target | Predefined array, user input target |
| Search Method | Linear Search           | Linear Search via class function    | Linear Search with exit()           | Linear Search with continue()       |
| Output        | Position of element     | Index of element                    | Index of element                    | Index of element                    |
| Complexity    | O(n)                    | O(n)                                | O(n)                                | O(n)                                |
| Concepts Used | Arrays, Loops           | Vectors, Classes, Loops             | Arrays, Loops, Exit function        | Arrays, Loops, Continue statement   |

## Algorithm (Linear Search)

Start

Input the number of elements (n) and array elements.

Input the target element to search.

Initialize index = -1.

For each element in the array:

If element equals target:

Set index = current position.

Break the loop.

If index != -1:

Print “Element found at position …”

Else, print “Element not found”.

End

## Program Description

### Linear Search with User Input Array

The program starts by asking the user for the number of elements they want to store in the array.

A static array is created with that many elements.

The user is prompted to enter each element one by one, which is stored in the array.

Next, the user inputs the element they want to search for.

The program initializes a variable to track whether the element is found. Initially, it is set to indicate not found.

The program then iterates through the array, comparing each element with the target value.

If a match is found, the program stores the index of the element and stops the search.

Finally, it checks whether the element was found:

If yes, it prints the position of the element.

If no, it prints that the element is not present in the array.

#### Key Points:

Uses static array, for loop, and if-else condition.

Provides 1-based position of the element for user-friendly output.

Good for learning basic linear search on user-defined data.

### Linear Search Using Class and Vector

This program demonstrates object-oriented programming by creating a class responsible for searching.

A dynamic array (vector) is used to store elements, which allows flexibility in size.

The class contains a function that implements linear search: it takes the array and the target element as input.

Inside the function, the program iterates through all elements of the vector.

If the element matches the target, the function returns the index; otherwise, it returns -1 indicating not found.

In the main program, the user is prompted to enter the number they want to search for.

An object of the class is created, and the search function is called with the vector and target as arguments.

Based on the returned value:

If the index is valid, the program prints the position of the target.

If not, it prints that the target was not found.

#### Key Points:

Introduces classes, objects, and functions.

Demonstrates dynamic arrays using vectors.

Encourages reusable code, making the search function usable in multiple programs.

### Linear Search with Predefined Array and Exit

This program uses a predefined array with fixed elements.

The user is asked to enter the element to search.

The program then iterates through the array, comparing each element to the target.

If a match is found, it immediately prints the index of the element and terminates the program using an exit command.

If the loop finishes without finding the element, the program prints that the element was not found.

#### Key Points:

Uses a predefined array; no user input for array elements.

Uses exit() function to stop the program immediately after finding the element.

Efficient in terms of stopping further comparisons once the target is found.

### Linear Search with Predefined Array and Continue

Like Program 3, this program uses a predefined array of elements.

The user is asked to enter the target element.

The program iterates through the array with a for loop.

During iteration:

If the current element matches the target, it prints the index and breaks the loop.

If not, it uses a continue statement to move to the next iteration (though optional, it demonstrates usage).

After the loop, the program checks if the element was never found and prints a message accordingly.

### Key Points:

Demonstrates continue and break statements.

Keeps program flow clear and structured.

Uses predefined array, which simplifies input handling.

## Concepts Used

Array: A collection of fixed-size elements.

Vector: Dynamic array which can grow or shrink.

For Loop: Iterates through elements.

If-Else Condition: Checks whether the element matches the target.

Exit Function: Immediately ends the program.

Class / Object (Code 2): Encapsulation and function usage.

Continue Statement: Skips to the next iteration if a condition is not met.

## Conclusion

Linear search is the simplest and most straightforward method to find an element in an array.

It works efficiently for small datasets but is not suitable for large datasets due to O(n) complexity.h.
