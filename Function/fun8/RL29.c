#include <stdio.h>

int isPrimeRec(int n, int d) {
    if (n < 2) return 0;
    if (d*d > n) return 1;
    if (n % d == 0) return 0;
    return isPrimeRec(n, d+1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (isPrimeRec(n,2)) printf("%d is prime\n", n);
    else printf("%d is not prime\n", n);
    return 0;
}
