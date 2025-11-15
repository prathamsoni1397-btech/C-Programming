#include<stdio.h>
int main()
{
    int a,converter;
    printf("Enter The Value In Hours:");
    scanf("%d",&a);
    converter=a*60;
    printf("The Value Of %d in Minutes Is:%d",a,converter);
    return 0;

}