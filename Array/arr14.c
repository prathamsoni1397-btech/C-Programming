#include<stdio.h>
int main()
{   
  
    int arr[6]={11,12,13,14,15};
       arr[5]=16;   
    for(int i=0;i<6;i++)
    {
        printf("The %d Value is:%d\n",i,arr[i]);
    }
    return 0;
}