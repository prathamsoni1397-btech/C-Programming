#include <stdio.h>

void printEven(int cur, int cnt) {
    if (cnt == 0) return;
    printf("%d ", cur);
    printEven(cur+2, cnt-1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("First %d even numbers:\n", n);
    printEven(2, n);
    printf("\n");
    return 0;
}
