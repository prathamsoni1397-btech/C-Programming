
#include<stdio.h>
int main(){
    int a[5],b[5],i,j=4;
    for(i=0;i<5;i++){
        printf("Enter %d Value :",i+1);
        scanf("%d",&a[i]);
    }

     for(i=0;i<5;i++){
         b[j] = a[i];
        j--;
    }
    printf("Reversed Array: \n ");
    for(j=0;j<5;j++){
        printf("%d ",b[j]);
    }
        return 0;
    
}
