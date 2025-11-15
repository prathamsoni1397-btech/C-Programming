#include <stdio.h>

void countPNZ(int a[], int n, int i, int *p, int *neg, int *z) {
    if (i == n) return;
    if (a[i] > 0) (*p)++;
    else if (a[i] < 0) (*neg)++;
    else (*z)++;
    countPNZ(a, n, i+1, p, neg, z);
}

int main() {
    int a[200];
    printf("Enter 200 integers:\n");
    for (int i=0;i<200;i++) scanf("%d", &a[i]);
    int p=0, neg=0, z=0;
    countPNZ(a, 200, 0, &p, &neg, &z);
    printf("Positive = %d\nNegative = %d\nZero = %d\n", p, neg, z);
    return 0;
}
