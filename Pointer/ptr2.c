#include<stdio.h>
	// Sort all the elements of a 4x4 matrix and store the result in a single-dimension array.
int main()
{
   int a[4][4],c[16];
   int temp,k=0;
 printf("Enter 16 Elements Of Array");
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<4;j++)
    {
        scanf("%d",&a[i][j]);
        c[k++]=a[i][j];
    }
   }
   

    for(int i=0;i<15;i++)
   {
    for(int j=i+1;j<16;j++)
    {
       if(c[i]>c[j])
       {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
       }
    }
   }
    for(int i=0;i<16;i++)
   {
        printf("%d\t",c[i]);
   }
   return 0;



}