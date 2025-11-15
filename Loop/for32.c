
#include <stdio.h>

int main() {
    int n, i;
    int count=0;



    for (n = 2; n <= 500; n++) {
        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                break;   
            }
        }
        if (i == n) {   
            
            count=count+1;
        }
    }
printf("The Number Of Prime Number Is:%d",count);

    return 0;
}

