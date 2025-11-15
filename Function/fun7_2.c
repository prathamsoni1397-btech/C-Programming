
#include <stdio.h>

int checkLeap(int y) {
    if (y % 400 == 0)
        return 1;
    else if (y % 100 == 0)
        return 0;
    else if (y % 4 == 0)
        return 1;
    else
        return 0;
}

void leapRec(int y) {
    if (checkLeap(y))
        printf("%d is a leap year.", y);
    else
        printf("%d is not a leap year.", y);
}

int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    leapRec(y);
    return 0;
}
