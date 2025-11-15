#include<stdio.h>
int main()
{
    int a,converter;
    printf("Enter The Value In Dollars:");
    scanf("%d",&a);
    converter=a*48;
    printf("The Value Of %d in Rupees Is:%d",a,converter);
    return 0;

}