#include<stdio.h>
int main()
{
    int a,converter;
    printf("Enter The Value In Ruppes:");
    scanf("%d",&a);
    converter=a/48;
    printf("The Value Of %d in Dollars Is:%d",a,converter);
    return 0;

}