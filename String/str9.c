#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[]="Pratham";
    char arr2[]="Soni";
    strcat(arr1,arr2);

    printf("The String Is:%s",arr1);
    return 0;
}