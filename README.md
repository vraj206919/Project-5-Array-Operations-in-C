# Project-5-Array-Operations-in-C


## Introduction

This project demonstrates different operations on **arrays in the C programming language**. Arrays are used to store multiple values in a single variable, and they are widely used for handling collections of data.

The programs in this project include operations such as:

* Finding negative numbers in an array
* Finding the largest element in a 2D array
* Calculating the transpose of a matrix
* Finding the sum of a specific row and column

---

# Programs Included

## 1. Find Negative Elements in an Array

GDB Link : - https://onlinegdb.com/xDGqTA3I6B

This program accepts the size of an array and its elements from the user. It then checks each element and prints only the **negative numbers** present in the array.

### Features

* Uses a **1D array**
* Iterates through elements using a loop
* Prints only elements less than zero

### Example

Input:
Array Size = 5
Elements = 2, -3, 7, -1, 4

Output:
Negative elements from an Array: -3 -1

---

## 2. Find the Largest Element in a 2D Array

GDB Link : - https://onlinegdb.com/vW4BelEiQ

This program allows the user to enter the **row and column size** of a 2D array and then inputs all elements. It compares every element to determine the **largest value** in the array.

### Features

* Uses a **2D array**
* Nested loops for rows and columns
* Compares elements to find the maximum value

### Example

Input Matrix:
1 5 3
7 2 9

Output:
The largest element is: 9

---

## 3. Transpose of a Matrix

GDB Link : - https://onlinegdb.com/KpnhvqtPD

This program reads a **square matrix** and prints its **transpose**. The transpose of a matrix is created by converting rows into columns.

### Features

* Uses a **square matrix**
* Prints transpose without creating another array
* Uses index swapping (a[j][i])

### Example

Input Matrix:
1 2
3 4

Output (Transpose):
1 3
2 4

---

## 4. Sum of Specific Row and Column
GDB Link : - https://onlinegdb.com/s-45dvprk

This program allows the user to enter a matrix and then choose a **specific row and column**. It prints the elements of that row and column and calculates their **sum**.

### Features

* Uses a **2D array**
* Allows user to choose row and column
* Calculates row sum and column sum separately

### Example

Matrix:
1 2 3
4 5 6
7 8 9

Row 1 → Sum = 15
Column 2 → Sum = 18

---

# Conclusion

This project demonstrates practical usage of **arrays in C programming**, including:

* One-dimensional arrays
* Two-dimensional arrays
* Matrix operations
* Searching and summation techniques

These programs help in understanding how arrays work and how they can be used for solving real-world data processing problems.

---

# Technologies Used

* Programming Language: **C**
* Compiler: **GCC / Turbo C / CodeBlocks / Dev C++**
* Concepts: **Arrays, Loops, Conditional Statements, Matrix Operations**
