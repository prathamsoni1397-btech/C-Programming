#include <stdio.h>

int sumOdd(int cur, int cnt) {
    if (cnt == 0) return 0;
    return cur + sumOdd(cur+2, cnt-1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum of first %d odd numbers = %d\n", n, sumOdd(1, n));
    return 0;
}
