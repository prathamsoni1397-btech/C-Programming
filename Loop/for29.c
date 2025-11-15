#include<stdio.h>
int main()
{
    int num;
    printf("Enter The number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%num==0)
        {
          printf("prime");
         return 0;
        }
        else
          printf(" ");
   }
       printf("not prime");
   
    return 0;
}
