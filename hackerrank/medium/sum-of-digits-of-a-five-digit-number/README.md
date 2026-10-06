# Sum of Digits of a Five Digit Number

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective** 

The modulo operator, `%`, returns the remainder of a division.  For example, `4 % 3 = 1` and `12 % 10 = 2`.  The ordinary division operator, `/`, returns a truncated integer value when performed on integers.  For example, `5 / 3 = 1`.  To get the last digit of a number in base 10, use $10$ as the modulo divisor.  

**Task**

Given a five digit integer, print the sum of its digits.  


**Input Format**

The input contains a single five digit number, $n$.

**Constraints**

$ 10000 \le n \le 99999$  

**Output Format**

Print the sum of the digits of the five digit number.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-06T16:41:47.735Z  

```c
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    n /= 10;
    sum += n % 10;
    printf("%d\n", sum);
    return 0;}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem)