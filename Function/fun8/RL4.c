#include <stdio.h>

void printN(int i, int n) {
    if (i > n) return;
    printf("%d ", i);
    printN(i+1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("First %d natural numbers:\n", n);
    printN(1, n);
    printf("\n");
    return 0;
}
