#include <stdio.h>

int isPrimeRec(int n, int d) {
    if (n < 2) return 0;
    if (d*d > n) return 1;
    if (n % d == 0) return 0;
    return isPrimeRec(n, d+1);
}

int countPrimes(int cur) {
    if (cur > 500) return 0;
    int add = isPrimeRec(cur,2) ? 1 : 0;
    return add + countPrimes(cur+1);
}

int main() {
    printf("Count of primes between 1 and 500 = %d\n", countPrimes(1));
    return 0;
}
