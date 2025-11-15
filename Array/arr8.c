
#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};  
    int b[10];                        
    
    int i,j = 0;
    
    for(i = 0;i <5; i++) {
        if(i == 2)  
            continue;
        b[j] = a[i];
        j++;
    }
    
    
    printf("Copied elements:\n");
    for(i = 0; i < j; i++) {
        printf("%d ", b[i]);
    }
    
    return 0;
}
