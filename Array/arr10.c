#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter The Values");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {  int count=0;
        for(int j=0;j<10;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        printf("The %d Value Is Repeated %d Time\n",a[i],count);
    }
    return 0;
}