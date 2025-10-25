github Submission for practical 7 of DAA lab
# Practical 7 - Optimal Binary Search Tree (OBST)

# Task 1
Implement the construction of an Optimal Binary Search Tree (OBST) using dynamic programming. The goal is to minimize the average search time for book lookups by arranging book IDs optimally in a binary search tree. Each book ID has a probability of being searched successfully (p[i]) and a probability of being searched unsuccessfully (q[i]). The program calculates the minimum expected cost of the OBST.

Input Format
First line: integer n — number of book IDs
Second line: n integers representing the sorted book IDs (keys)
Third line: n real numbers — probabilities of successful searches (p[i])
Fourth line: n+1 real numbers — probabilities of unsuccessful searches (q[i])

Example
Keys: 10 20 30 40
P[i]: 0.1 0.2 0.4 0.3
Q[i]: 0.05 0.1 0.05 0.05 0.1

Output Format
Print the minimum expected cost of the Optimal Binary Search Tree, rounded to 4 decimal places.

File: A2_B3_38_Piyush_Dhanuka_practical_07.c

# Task 2
Solve the Optimal Binary Search Tree problem as given on GeeksforGeeks.
Problem Link: https://www.geeksforgeeks.org/problems/optimal-binary-search-tree2214/1

File: geeksforgeeks.cpp

This repository contains:

C code for Task 1 (User input-based OBST)

C++ code for Task 2 (GeeksforGeeks OBST problem)
