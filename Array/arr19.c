#include<stdio.h>
int main()
{   
  
    int arr[5]={11,12,13,14,15};
    int position;
    printf("Enter the position at which you want to Search element ");
    scanf("%d",&position);
    for(int i=0;i<5;i++)
    {
        if(i==position)
        {
          printf("The %d Value is\t%d",i,arr[i]); 
        break;
        }
    }
   
    return 0;
}