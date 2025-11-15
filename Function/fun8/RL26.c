#include <stdio.h>

int sumCubeDigits(int n) {
    if (n == 0) return 0;
    int d = n % 10;
    return d*d*d + sumCubeDigits(n/10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (sumCubeDigits(n) == n) printf("%d is an Armstrong number\n", n);
    else printf("%d is not an Armstrong number\n", n);
    return 0;
}
