
#include<stdio.h>
int main(){
    printf("No Which Are divisible by 5 Are:");
    printf("\n");
    for(int i =0;i<100;i++){
        if(i%5==0){
            printf("%d,",i);
        }
        if(i%5!=0){
            continue;
        }
    }

      return 0;

}

