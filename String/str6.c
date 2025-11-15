#include<stdio.h>
int main()
{
    char a[]={'p','r','a','t','h','a','m','\0'};
    char b[]={'P','R','A','T','H','A','M','\0'};
    printf("%s",strcmp(a,b));
    if(strlen(a)>strlen(b))
        printf("String a Is greater Then b.... ");
        else if(strlen(b)>strlen(a))
        printf("String b Is greater Then a.... ");
        else
         printf("Both Sring Are Equal.... ");
    return 0;

}


