#include <stdio.h>

int revRec(int n, int res) {
    if (n == 0) return res;
    return revRec(n/10, res*10 + n%10);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int r = revRec(n, 0);
    printf("Reversed = %d\n", r);
    return 0;
}
