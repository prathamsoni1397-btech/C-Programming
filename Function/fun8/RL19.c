#include <stdio.h>

void printDiv5(int cur) {
    if (cur > 100) return;
    if (cur % 5 == 0) printf("%d ", cur);
    printDiv5(cur+1);
}

int main() {
    printf("Numbers between 1 and 100 divisible by 5:\n");
    printDiv5(1);
    printf("\n");
    return 0;
}
