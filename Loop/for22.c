#include<stdio.h>
int main()
{
int n;
for(;;)
{
printf("Enter the number");
scanf("%d",&n);

if(0<n && n<9)
printf("1\n");

else if(10<n && n<99)
printf("2\n");

else if(1000<n && n<999)
printf("3\n");

else
printf("4\n");
}


return 0;
}