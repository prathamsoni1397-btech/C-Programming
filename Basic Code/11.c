#include<stdio.h>
int main()
{
    float a,converter;
    printf("Enter The Value In Grams:");
    scanf("%f",&a);
    converter=a/1000.0;
    printf("The Value Of %f in kg Is:%f",a,converter);
    return 0;

}