#include <stdio.h>

void printN(int i, int n) {
    if (i > n) return;
    printf("%d ", i);
    printN(i+1, n);
}

int main() {
    printf("First 10 natural numbers:\n");
    printN(1, 10);
    printf("\n");
    return 0;
}
