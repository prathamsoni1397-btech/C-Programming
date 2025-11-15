#include<stdio.h>
int main()
{
    int p,n;
    float r,intrest;
    printf("Enter The Initial Amount and Time Period:");
    scanf("%d %d",&p,&n);
    printf("Enter The Rate Of Intrest:");
    scanf("%f",&r);
    intrest=(p*r*n)/100.0;
    printf("The Value Of intrest Is:%f",intrest);

}