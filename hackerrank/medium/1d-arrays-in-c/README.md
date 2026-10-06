# 1D Arrays in C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

An array is a container object that holds a fixed number of values of a single type. To create an array in C, we can do `int arr[n];`. Here, arr, is a variable array which holds up to $10$ integers. The above array is a static array that has memory allocated at compile time. A dynamic array can be created in C, using the malloc function and the memory is allocated on the heap at runtime. To create an integer array, $arr$ of size $n$, `int *arr = (int*)malloc(n * sizeof(int))`, where $arr$ points to the base address of the array.  When you have finished with the array, use `free(arr)` to deallocate the memory.

In this challenge, create an array of size $n$ dynamically, and read the values from stdin.  Iterate the array calculating the sum of all elements.  Print the sum and free the memory where the array is stored.  

While it is true that you can sum the elements as they are read, without first storing them to an array, but you will not get the experience working with an array.  Efficiency will be required later.  


**Input Format**

The first line contains an integer, $n$.  
The next line contains $n$ space-separated integers.

**Constraints**

$ 1 \le n \le 1000$  
$ 1 \le a[i] \le 1000$

**Output Format**

Print the sum of the integers in the array.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:44:17.342Z  

```c
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);}
    for (int i = 0; i < n; i++) {
        sum += arr[i];}
    printf("%d\n", sum);
    free(arr);
    return 0;}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/1d-arrays-in-c/problem)