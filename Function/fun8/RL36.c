#include <stdio.h>

void patA(int i, int n) {
    if (i > n) return;
    printf("%d %d\n", i, n - i + 1);
    patA(i+1, n);
}

void patB(int i, int n) {
    if (i > n) return;
    printf("%d %d\n", i, n - i + 1);
    printf("%d %d\n", i, n - i + 1);
    patB(i+1, n);
}

int main() {
    printf("Pattern A:\n");
    patA(1,5);
    printf("\nPattern B:\n");
    patB(1,3);
    return 0;
}
