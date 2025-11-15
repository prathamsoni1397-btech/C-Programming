#include<stdio.h>
int main()
{
    float a,converter;
    printf("Enter The Value In Ferenhit:");
    scanf("%f",&a);
    converter=(5.0/9.0)*(a-32.0);

    printf("The Value Of %f in Celcius Is:%f",a,converter);
    return 0;

} 