# Printing Pattern Using Loops

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Print a pattern of numbers from $1$ to $n$ as shown below.  Each of the numbers is separated by a single space.    

                                4 4 4 4 4 4 4  
                                4 3 3 3 3 3 4   
                                4 3 2 2 2 3 4   
                                4 3 2 1 2 3 4   
                                4 3 2 2 2 3 4   
                                4 3 3 3 3 3 4   
                                4 4 4 4 4 4 4   

**Input Format**

The input will contain a single integer $n$.  

**Constraints**

$1 \le n \le 1000$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T04:28:50.165Z  

```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int bottom = 2 * n - 2 - i;
            int right = 2 * n - 2 - j;

            int min = top;

            if (left < min)
                min = left;
            if (bottom < min)
                min = bottom;
            if (right < min)
                min = right;

            printf("%d", n - min);

            if (j < 2 * n - 2)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/printing-pattern-2/problem)