#include<stdio.h>
int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
    printf("Enter The Value:");
    scanf("%d",&num[i]);
    }
    if(num[0]== num[4] &&num[1]==num[3])
        printf("Palindrome");
    else
        printf("not polindrome");
    
    return 0;
}