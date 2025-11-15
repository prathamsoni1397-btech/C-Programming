#include<stdio.h>
int main()
{
    int num;
    printf("Enter The Number:");
    scanf("%d",&num);

    while(num>0)
    {
       printf("%d",num%10);
       num=num/10;

        if(num>0)
        printf(",");

    }
    return 0;
}