#include<stdio.h>
int main()
{
int sum=0;
for(int i=1;i<=100;i++)
{
    if(i%13==0)
    {
        sum=sum+i;
    }

}
 printf("The Sum Is:%d",sum);
return 0;

}


