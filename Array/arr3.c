
#include<stdio.h>
int main (){
    int a[5];
    int i,j,temp;
    for(i=0;i<5;i++){
        printf("Enter %d Value :",i+1);
        scanf("%d",&a[i]);
    }

    for(i=0;i<=5;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
     printf("Ascending Output:");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
