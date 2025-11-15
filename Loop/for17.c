#include<stdio.h>
int main()
{
    int num[200];
    int count=0,count1=0,count2=0;
    
    for(int i=0;i<200;i++)
    {
        printf("Enter The Value %d",i);
        printf("\t");
        scanf("%d",&num[i]);

     if(num[i]<0)
            count++;
     if(num[i]>0)
             count1++;
     if(num[i]==0)
            count2++;
    }
    
    printf("Negative Value Are:%d\n",count);
    printf("Positive Value Are:%d\n",count1);
    printf(" Zeros Are:%d\n",count2);

    return 0;
}

   
  