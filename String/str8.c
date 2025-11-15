
#include<stdio.h>
#include<string.h>

int main(){
    char str1[100],str2[100];
    printf("Enter String 1:");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);

    if(strcmp(str1,str2)==0){
        printf("The String Is Palindrome");
        }
    else printf("String Is Not Palindrome");
    return  0;
}

