
#include<stdio.h>
int main()
{
    int n;
    int sum=1;
    printf("Enter The Value Of N:");
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         sum=sum*i;

     }
       printf("%d",sum);

     return 0;
}



