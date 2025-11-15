#include<stdio.h>
int main()
{
    float a,converter;
    printf("Enter The Value In KG:");
    scanf("%f",&a);
    converter=a*1000.0;
    printf("The Value Of %f in grams Is:%f",a,converter);
    return 0;

}