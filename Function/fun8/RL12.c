#include <stdio.h>

void printNameN(char name[], int cnt) {
    if (cnt == 0) return;
    printf("%s\n", name);
    printNameN(name, cnt-1);
}

int main() {
    char name[100];
    int n;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter times: ");
    scanf("%d", &n);
    printNameN(name, n);
    return 0;
}
