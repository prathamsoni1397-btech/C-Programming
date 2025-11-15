#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter The Value Of n:");
    scanf("%d",&n);
    int num[n];
    
    for(int i=0;i<=(n-1);i++)
    {
        printf("Enter The Value %d",i);
        printf("\t");
        scanf("%d",&num[i]);
        sum=sum+num[i];

    }
    printf("The Sum Of 10 Value Is:%d\n",sum);

    printf("The mean Of 10 Value Is:%d\n",sum/n);

    return 0;
}