
#include <stdio.h>

int power(int a, int n);

int main() {
    int a, n;

    printf("Enter Number: ");
    scanf("%d", &a);

    printf("Enter Power: ");
    scanf("%d", &n);

    int result = power(a, n);
    printf("Answer: %d\n", result);

    return 0;
}

int power(int a, int n) {
    int result = 1;
    for(int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}
