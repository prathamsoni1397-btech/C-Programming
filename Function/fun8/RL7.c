#include <stdio.h>

int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n-1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers = %d\n", n, sumN(n));
    return 0;
}
