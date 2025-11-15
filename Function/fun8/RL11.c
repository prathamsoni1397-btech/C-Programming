#include <stdio.h>

void printName5(char name[], int cnt) {
    if (cnt == 0) return;
    printf("%s\n", name);
    printName5(name, cnt-1);
}

int main() {
    char name[100] = "YourName";
    printf("Printing name 5 times:\n");
    printName5(name, 5);
    return 0;
}
