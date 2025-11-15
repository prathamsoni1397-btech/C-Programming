#include <stdio.h>

int sumFactors(int n, int cur) {
    if (cur > n/2) return 0;
    int add = (n % cur == 0) ? cur : 0;
    return add + sumFactors(n, cur+1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (sumFactors(n,1) == n) printf("%d is a perfect number\n", n);
    else printf("%d is not a perfect number\n", n);
    return 0;
}
