#include <stdio.h>

int sumArr(int a[], int n, int i) {
    if (i == n) return 0;
    return a[i] + sumArr(a, n, i+1);
}

int main() {
    int a[10];
    printf("Enter 10 values:\n");
    for (int i=0;i<10;i++) scanf("%d", &a[i]);
    int s = sumArr(a, 10, 0);
    printf("Sum = %d\nMean = %.2f\n", s, s / 10.0);
    return 0;
}
