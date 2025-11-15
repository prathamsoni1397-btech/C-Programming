#include <stdio.h>

int sumEven(int cur, int cnt) {
    if (cnt == 0) return 0;
    return cur + sumEven(cur+2, cnt-1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of first %d even numbers = %d\n", n, sumEven(2, n));
    return 0;
}
