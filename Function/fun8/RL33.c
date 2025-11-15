#include <stdio.h>

int pow10(int d) {
    if (d == 0) return 1;
    return 10 * pow10(d-1);
}

int digitsCount(int n) {
    if (n == 0) return 1;
    if (n < 10) return 1;
    return 1 + digitsCount(n/10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int d = digitsCount(n);
    long long sq = (long long)n * n;
    int mod = sq % pow10(d);
    if (mod == n) printf("%d is automorphic\n", n);
    else printf("%d is not automorphic\n", n);
    return 0;
}
