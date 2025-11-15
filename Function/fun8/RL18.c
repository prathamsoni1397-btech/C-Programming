#include <stdio.h>

void countBG(int a[], int n, int i, int *boys, int *girls) {
    if (i == n) return;
    if (a[i] == 'M' || a[i] == 'm') (*boys)++;
    else if (a[i] == 'F' || a[i] == 'f') (*girls)++;
    countBG(a, n, i+1, boys, girls);
}

int main() {
    char arr[50];
    printf("Enter sex code for 50 students (M/F) without spaces, e.g. MFMF...:\n");
    for (int i=0;i<50;i++) {
        scanf(" %c", &arr[i]);
    }
    int b=0, g=0;
    int tmp[50];
    for (int i=0;i<50;i++) tmp[i] = arr[i];
    countBG(tmp, 50, 0, &b, &g);
    printf("Boys = %d\nGirls = %d\n", b, g);
    return 0;
}
