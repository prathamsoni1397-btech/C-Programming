#include<stdio.h>
int main()
{   
  
    int arr[6]={11,12,13,14,15,16};
    int position,size=6;
    printf("Enter the position at which you want to delete element");
    scanf("%d",&position);
    for(int i=position;i<6;i++)
    {
        arr[i]=arr[i+1];
        
    }
      size--;
    
    for(int i=0;i<size;i++)
    {
        printf("The %d Value is:%d\n",i,arr[i]);
    }
    return 0;
}