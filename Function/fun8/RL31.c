#include <stdio.h>

int isPrimeRec(int n, int d) {
    if (n < 2) return 0;
    if (d*d > n) return 1;
    if (n % d == 0) return 0;
    return isPrimeRec(n, d+1);
}

int sumPrimes(int cur) {
    if (cur > 500) return 0;
    int add = isPrimeRec(cur,2) ? cur : 0;
    return add + sumPrimes(cur+1);
}

int main() {
    printf("Sum of primes between 1 and 500 = %d\n", sumPrimes(1));
    return 0;
}
