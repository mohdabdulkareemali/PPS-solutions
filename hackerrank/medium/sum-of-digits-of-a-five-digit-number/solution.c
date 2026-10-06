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
