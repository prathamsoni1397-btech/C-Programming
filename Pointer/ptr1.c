#include<stdio.h>
	// Perform addition, subtraction and multiplication operations on two matrices.
  void addition(int a[10][10],int b[10][10],int r1,int c1);
 void subtraction(int a[10][10],int b[10][10],int r1,int c1);
 void multiplication(int a[10][10],int b[10][10],int r1,int c1,int c2);
int main()
{
 int r1,r2,c1,c2,a[10][10],b[10][10];

 
   
   printf("Enter The Row And Colum Of 1st and 2nd matrics:");
   scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
   printf("Enter The Value of 1st matrics");

    for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c1;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
     printf("Enter The Value of 2nd matrics");
    for(int i=0;i<r2;i++)
   {
    for(int j=0;j<c2;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
    addition(a,b,r1,c1);
    subtraction(a,b,r1,c1);
    multiplication(a,b,r1,c1,c2);
  
    return 0;
 
}
void addition(int a[10][10],int b[10][10],int r1,int c1)
 {
  printf("\n");
   int  sum[10][10];
for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c1;j++)
    {
       sum[i][j]=a[i][j]+b[i][j];
       printf("%d\t",sum[i][j]);
    }
    printf("\n");
}
 }
void subtraction(int a[10][10],int b[10][10],int r1,int c1)
  {
    printf("\n");
    int sub[10][10];
    for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c1;j++)
    {
       sub[i][j]=a[i][j]-b[i][j];
       printf("%d\t",sub[i][j]);
    }
    printf("\n");
}
  }

   void multiplication(int a[10][10],int b[10][10],int r1,int c1,int c2)
  {
    printf("\n");
    int mul[10][10];
    for(int i=0;i<r1;i++)
   {
    for(int j=0;j<c2;j++)
    { mul[i][j]=0;
      for(int k=0;k<c1;k++)
      {
       mul[i][j]+=a[i][k]*b[k][j];
       printf("%d\t",mul[i][j]);
    }
  }
    printf("\n");
}
  }


