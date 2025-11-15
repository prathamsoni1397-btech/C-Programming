#include <stdio.h>

void printFactors(int n, int cur) {
    if (cur > n) return;
    if (n % cur == 0) printf("%d ", cur);
    printFactors(n, cur+1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factors: ");
    printFactors(n, 1);
    printf("\n");
    return 0;
}
