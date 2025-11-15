
#include <stdio.h>

void findMinMax(int a[], int n, int i, int *max, int *min) {
    if (i == n)
        return;

    if (a[i] > *max)
        *max = a[i];
    if (a[i] < *min)
        *min = a[i];

    findMinMax(a, n, i + 1, max, min);
}

int main() {
    int a[50], n, i, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];
    findMinMax(a, n, 1, &max, &min);

    printf("Maximum = %d\nMinimum = %d", max, min);
    return 0;
}
