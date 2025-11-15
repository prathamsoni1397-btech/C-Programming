#include <stdio.h>

int sumDiv13(int cur) {
    if (cur > 100) return 0;
    int add = (cur % 13 == 0) ? cur : 0;
    return add + sumDiv13(cur+1);
}

int main() {
    printf("Sum of numbers divisible by 13 between 1 and 100 = %d\n", sumDiv13(1));
    return 0;
}
