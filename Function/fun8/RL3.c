#include <stdio.h>

void printEven(int i, int cnt) {
    if (cnt == 0) return;
    printf("%d ", i);
    printEven(i+2, cnt-1);
}

int main() {
    printf("First 10 even numbers:\n");
    printEven(2, 10);
    printf("\n");
    return 0;
}
