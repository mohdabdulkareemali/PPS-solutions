# Pointers in C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given an array of integers, $marks$, denoting the marks scored by students in a class.

- The alternating elements $marks_{0}$, $marks_{2}$, $marks_{4}$ and so on denote the marks of boys.
- Similarly, $marks_{1}$, $marks_{3}$, $marks_{5}$ and so on denote the marks of girls.

The array name, $marks$, works as a pointer which stores the base address of that array. In other words, $marks$ contains the address where $marks_{0}$ is stored in the memory.

For example, let $marks = [3, 2, 5]$ and $marks$ stores *0x7fff9575c05f*. Then, *0x7fff9575c05f* is the memory address of $marks_{0}$.

![image](https://s3.amazonaws.com/hr-assets/0/1525261282-328cd090eb-UntitledDiagram9.png)

**Function Description**   

Complete the function, *marks_summation* in the editor below.   

*marks_summation* has the following parameters:   

- *int marks[number_of_students]:*  the marks for each student   
- *int number_of_students:* the size of marks[]   
- *char gender:* either 'g' or 'b'   

**Returns**   

- *int:* the sum of marks for boys if $gender = b$, or of marks of girls if $gender = g$   

**Input Format**

- The first line contains $number\_of\_students$, denoting the number of students in the class, hence the number of elements in $marks$.
- Each of the $number\_of\_students$ subsequent lines contains $marks_{i}$.
- The next line contains $gender$. 

**Constraints**

- $1 \le number\_of\_students \le 10^3$
- $1 \le marks_{i} \le 10^3$ (where $0 \le i < number\_of\_students$)
- $gender$ = $g$ or $b$

**Output Format**

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T04:26:05.809Z  

```c
#include <stdio.h>

void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = *a - *b;

    if (diff < 0) {
        diff = -diff;
    }

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    update(&a, &b);

    printf("%d\n%d\n", a, b);

    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/students-marks-sum/problem)