#include<stdio.h>
int main()
{
    float a,converter;
    printf("Enter The Value In Celcius:");
    scanf("%f",&a);
    converter=((9.0/5.0)*a)+32.0;

    printf("The Value Of %f in Ferenhit Is:%f",a,converter);
    return 0;

} 