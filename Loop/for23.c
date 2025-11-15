#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("Enter The Number:");
    scanf("%d",&num);

    while(num>0)
    {
        int a=num%10;
        sum=sum+a;
        num=num/10;
    }
    printf("The Sum Is:%d",sum);
    return 0;
}