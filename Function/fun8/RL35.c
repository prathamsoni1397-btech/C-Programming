#include <stdio.h>

void printPair(int a, int b) {
    printf("%d %d\t", a, b);
}

void patA_rows(int r, int maxr, int c, int maxc) {
    if (r > maxr) return;
    if (c > maxc) {
        printf("\n");
        patA_rows(r+1, maxr, 1, maxc);
        return;
    }
    printPair(r, c);
    patA_rows(r, maxr, c+1, maxc);
}

void patternA() {
    printf("Pattern A:\n");
    patA_rows(1,2,1,3);
}

void patB_rows(int c, int maxc, int r, int maxr) {
    if (c > maxc) return;
    if (r > maxr) {
        printf("\n");
        patB_rows(c+1, maxc, 1, maxr);
        return;
    }
    printPair(r, c);
    patB_rows(c, maxc, r+1, maxr);
}

void patternB() {
    printf("Pattern B:\n");
    patB_rows(1,2,1,3);
}

void patC_cell(int r, int maxr, int c, int maxc) {
    if (r > maxr) return;
    if (c > maxc) {
        printf("\n");
        patC_cell(r+1, maxr, 1, maxc);
        return;
    }
    if (r==1 && c<=3) printf("1 %d %d\t", 1, c==1?1:(c==2?1:1));
    else if (r==2 && c==1) printf("1 2 1\t");
    else if (r==2 && c==2) printf("1 2 2\t");
    else if (r==3 && c==1) printf("2 1 1\t");
    else if (r==3 && c==2) printf("2 1 2\t");
    else printf("2 2 1\t");
    patC_cell(r, maxr, c+1, maxc);
}

void patternC() {
    printf("Pattern C (approximation):\n");
    patC_cell(1,3,1,2);
    printf("\n");
}

void patD_rows(int r, int maxr, int c, int maxc) {
    if (r > maxr) return;
    if (c > maxc) {
        printf("\n");
        patD_rows(r+1, maxr, 1, maxc);
        return;
    }
    printPair(6 - r, c);
    patD_rows(r, maxr, c+1, maxc);
}

void patternD() {
    printf("Pattern D:\n");
    patD_rows(1,3,1,2);
}

int main() {
    patternA();
    printf("\n");
    patternB();
    printf("\n");
    patternC();
    printf("\n");
    patternD();
    printf("\n");
    return 0;
}
