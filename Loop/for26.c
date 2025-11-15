#include<stdio.h>
int main()
{
    int num[3]={1,5,3};
    int n=153;
    if(num[0]^3+num[1]^3+num[2]^3==n)
    printf("Amstrong");
    else
    printf("not Amstrong");

    return 0;
}