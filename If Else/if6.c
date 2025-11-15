#include<stdio.h>
int main()
{
  int maths,chem,phy,total,average;
  printf("Enter The Value Of Three Subjects Marks:");
  scanf("%d %d %d",&maths,&chem,&phy);

   printf(" The total Of Three Subjects Marks is %d\n:",(maths+chem+phy));
   printf(" The Average Of Three Subjects Marks is %d\n:",(maths+chem+phy)/3);
    average=(maths+chem+phy)/3;
   if(average>=70)
    {
    printf("Distinction");
    }

   else if(average>=60)
    {
    printf("First Class\n");
    }

    else if(average>=50)
    {
    printf("Second Class\n");
    }

    else if(average>=35)
    {
    printf("Third Class\n");
    }
      if(maths<35 || chem<35 || phy<35)
  {
      printf("Student Is Fail");
  }
  else
  {
       printf("Student Is Pass");
  }
    return 0;


}
