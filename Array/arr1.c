#include<stdio.h>
int main()
    {
        int arr[5];
        for(int i=0;i<5;i++)
        {
            printf("The %d Num is:",i);
            scanf("%d",&arr[i]);
        }
          for(int i=0;i<5;i++)
        {
            printf("The %d value is:%d\n",i,arr[i]);
        }

        return 0;
           

    }
