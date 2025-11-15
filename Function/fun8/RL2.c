#include <stdio.h>

void printOdd(int i, int cnt) {
    if (cnt == 0) return;
    printf("%d ", i);
    printOdd(i+2, cnt-1);
}

int main() {
    printf("First 10 odd numbers:\n");
    printOdd(1, 10);
    printf("\n");
    return 0;
}
