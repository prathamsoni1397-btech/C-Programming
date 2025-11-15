
#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float divi(float a, float b) { return b == 0 ? 0 : a / b; }

float calc(float a, char op, float b) {
    if (op == '+') return add(a, b);
    else if (op == '-') return sub(a, b);
    else if (op == '*') return mul(a, b);
    else if (op == '/') return divi(a, b);
    else return 0;
}

void calcRec() {
    float a, b, res;
    char op, choice;
    printf("Enter expression (a + b): ");
    scanf("%f %c %f", &a, &op, &b);
    res = calc(a, op, b);
    if (op == '/' && b == 0)
        printf("Division by zero not allowed.\n");
    else
        printf("= %.2f\n", res);

    printf("Do you want to calculate again (y/n)? ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y')
        calcRec();
}

int main() {
    calcRec();
    return 0;
}
