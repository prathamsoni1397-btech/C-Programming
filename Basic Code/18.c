#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter The Value Of Length And Width");
    scanf("%d %d",&l,&b);
    printf("The Area Of The Rectangle Is:%d\n",(l*b));
    printf("The Perimeter Of The Square Is:%d\n",(2*(l+b)));
    return 0;
}