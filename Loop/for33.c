
#include<stdio.h>
int main(){
    int n;
    printf("Enter No :");
    scanf("%d",&n);

    int ldn=n%10;
     int m =n*n;
    int ldm=m%10;
    if(ldn==ldm){
        printf("%d Is Automorphic Number",n);
       }

    else printf("%d Is Not Automorphic Number",n);
    return 0;
}
