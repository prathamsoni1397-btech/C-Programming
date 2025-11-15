#include <stdio.h>

int sumDiv3(int cur) {
    if (cur > 100) return 0;
    int add = (cur % 3 == 0) ? cur : 0;
    return add + sumDiv3(cur+1);
}

int main() {
    printf("Sum of numbers between 1 and 100 divisible by 3 = %d\n", sumDiv3(1));
    return 0;
}
