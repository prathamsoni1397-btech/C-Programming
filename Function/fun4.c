
#include<stdio.h>
void swap(int a,int b);
int main(){
    int a,b;
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    printf("Normal Values:a=%d b=%d \n",a,b);
    swap(a,b);
return 0;
}
void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Swaped Values:a=%d b=%d",a,b);
}
