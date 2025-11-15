
#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);

int main() {
    int a, b;
    char op;

    printf("Enter Num 1: ");
    scanf("%d", &a);

    printf("Enter Operation (+, -, *, /): ");
    scanf(" %c", &op);  
    

    printf("Enter Num 2: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("Result: %d\n", sum(a, b));
            break;
        case '-':
            printf("Result: %d\n", sub(a, b));
            break;
        case '*':
            printf("Result: %d\n", mul(a, b));
            break;
        case '/':
            if (b != 0)
                printf("Result: %.2f\n", div(a, b));
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    return (float)a / b;
}
