#include<stdio.h>
int main()
{   
  
    int arr[6]={11,12,13,14,15,16};
    int size=6;

    for(int i=5;i<6;i++)
    {
        arr[i]=arr[i+1];
        
    }
      size--;
    
    for(int i=0;i<5;i++)
    {
        printf("The %d Value is:%d\n",i,arr[i]);
    }
    return 0;
}