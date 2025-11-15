#include <stdio.h>

float power(float a, int b) {
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}

int main() {
    float a;
    int b;
    printf("Enter base and exponent: ");
    scanf("%f %d", &a, &b);
    printf("%.2f raised to %d is %.2f", a, b, power(a, b));
    return 0;
}