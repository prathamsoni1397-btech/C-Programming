#include <stdio.h>

void findMinMax(int a[], int n, int i, int *min, int *max) {
    if (i == n) return;
    if (a[i] < *min) *min = a[i];
    if (a[i] > *max) *max = a[i];
    findMinMax(a, n, i+1, min, max);
}

int main() {
    int a[100];
    printf("Enter 100 numbers:\n");
    for (int i=0;i<100;i++) scanf("%d", &a[i]);
    int min=a[0], max=a[0];
    findMinMax(a, 100, 1, &min, &max);
    printf("Smallest = %d\nLargest = %d\n", min, max);
    return 0;
}
