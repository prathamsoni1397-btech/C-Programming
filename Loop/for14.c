#include<stdio.h>
int main()
{
    int num[10];
    int sum=0;
    
    for(int i=0;i<10;i++)
    {
        printf("Enter The Value %d",i);
        printf("\t");
        scanf("%d",&num[i]);
        sum=sum+num[i];

    }
    printf("The Sum Of 10 Value Is:%d\n",sum);

    printf("The mean Of 10 Value Is:%d\n",sum/10);

    return 0;
}