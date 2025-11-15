#include<stdio.h>
int main()
{
    char a[]={'p','r','a','t','h','a','m','\0'};
    char b[]={'\0'};
     printf("The source string Is:%s\n",strlwr(a));
      printf("The target string Is:%s",strcpy(b,a));

    return 0;

}

