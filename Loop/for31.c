
#include <stdio.h>

int main() {
    int n, i;
    int sum=0;



    for (n = 2; n <= 500; n++) {
        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                break;   
            }
        }
        if (i == n) {   
            
            sum=sum+i;
        }
    }
printf("The Sum Of Prime Number Is:%d",sum);

    return 0;
}

