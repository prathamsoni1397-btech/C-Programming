#include <stdio.h>

void printDigits(int n) {
    if (n == 0) return;
    printDigits(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n == 0) printf("0\n");
    else {
        printf("Digits (left to right): ");
        printDigits(n);
        printf("\n");
    }
    return 0;
}
