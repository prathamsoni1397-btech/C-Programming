#include<stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2],add[2][2];

    printf("Enter The Value Of arr1\t");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        scanf("%d",&arr1[i][j]);
    }

    printf("Enter The Value Of Arr2\t");
      for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        scanf("%d",&arr2[i][j]);
    }

       for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            add[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d",add[i][j]);
        }
        printf("\n");
    }
    return 0;
   
}