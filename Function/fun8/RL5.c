#include <stdio.h>

void printOdd(int cur, int cnt) {
    if (cnt == 0) return;
    printf("%d ", cur);
    printOdd(cur+2, cnt-1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("First %d odd numbers:\n", n);
    printOdd(1, n);
    printf("\n");
    return 0;
}
