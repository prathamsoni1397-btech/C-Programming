#include<stdio.h>
int main()
{
int n;
printf("Enter The value Of n:");
scanf("%d",&n);

for(int i=1;i<=n;i++)
{
    if(i%2==0)
    {
        continue;
    }
printf("%d\t",i);
}
return 0;

}

