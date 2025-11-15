#include <stdio.h>

int main() {
    int a[3][3];

    
    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]); 
        }
    }

    int *ptr = &a[0][0];  
    int smallest = *ptr;
    int largest = *ptr;

    
    for(int i = 0; i < 9; i++) {
        if (*(ptr + i) < smallest)
            smallest = *(ptr + i);
        if (*(ptr + i) > largest)
            largest = *(ptr + i);
    }

    printf("\nThe Largest Value: %d", largest);
    printf("\nThe Smallest Value: %d\n", smallest);

    return 0;
}