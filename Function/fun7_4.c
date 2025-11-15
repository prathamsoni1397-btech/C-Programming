
#include <stdio.h>

void swapRec(int *a, int *b, int step) {
    if (step == 1) {
        int temp = *a;
        *a = *b;
        *b = temp;
        return;
    } else {
        swapRec(a, b, step - 1);
    }
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swap: x=%d y=%d\n", x, y);
    swapRec(&x, &y, 1);
    printf("After swap: x=%d y=%d", x, y);
    return 0;
}
