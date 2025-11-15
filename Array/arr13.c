#include<stdio.h>
int main()
{   
  
    int arr[6]={11,12,13,14,15};
    int position,element;
    printf("Enter the position at which you want to add element and enter the value");
    scanf("%d %d",&position,&element);
    for(int i=5;i>=0;i--)
    {
        arr[i]=arr[i-1];
        if(i==position)
        {
        arr[i]=element;
        break;
        }
    }
    
    for(int i=0;i<6;i++)
    {
        printf("The %d Value is:%d\n",i,arr[i]);
    }
    return 0;
}