#include <stdio.h>

int isPrimeRec(int n, int d) {
    if (n < 2) return 0;
    if (d*d > n) return 1;
    if (n % d == 0) return 0;
    return isPrimeRec(n, d+1);
}

void printPrimes(int cur) {
    if (cur > 500) return;
    if (isPrimeRec(cur,2)) printf("%d ", cur);
    printPrimes(cur+1);
}

int main() {
    printf("Primes between 1 and 500:\n");
    printPrimes(1);
    printf("\n");
    return 0;
}
