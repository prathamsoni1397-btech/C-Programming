#include<stdio.h>
int main()
{

    int a,b,c;
    printf("Enter The Value Of Three Number:");
    scanf("%d %d %d",&a ,&b, &c);
    if(a>b && a>c)
    {
        printf("A is the greatest number");
    }

    else if(b>a && b>c)
    {
        printf("B is the greatest value");
    }

    else
    {
        printf("c is the greatest value");
    }
        return 0;
}

