#include<stdio.h>
int main()
{
    int l;
    printf("Enter The Value Of Length");
    scanf("%d",&l);
    printf("The Area Of The Square Is:%d\n",(l^2));
    printf("The Perimeter Of The Square Is:%d\n",(4*l));
    return 0;
}