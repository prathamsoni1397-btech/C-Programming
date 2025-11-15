#include <stdio.h>
#include <stdlib.h>

long long sumArr(long long a[], int n, int i) {
    if (i == n) return 0;
    return a[i] + sumArr(a, n, i+1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    long long *a = (long long*)malloc(sizeof(long long)*n);
    printf("Enter %d values:\n", n);
    for (int i=0;i<n;i++) scanf("%lld", &a[i]);
    long long s = sumArr(a, n, 0);
    printf("Sum = %lld\nMean = %.2f\n", s, (double)s / n);
    free(a);
    return 0;
}
