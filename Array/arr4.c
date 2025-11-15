#include<stdio.h>
int main()
{
int num,a,b,c,d,e,f,g,h,j,k,l;
printf ("enter the num:");
scanf("%d",&num);
if((num/500)>=1)
{
 a=num/500;
printf("num of 500 note is%d\n",a);
}
 b=num-(a*500);

 if((b/200)>=1)
 {
 c=b/200;
printf("num of 200 note is %d\n",c);
 }
  d=b-(c*200);

 if((d/100)>=1)
 {
 e=d/100;
printf("num of 100 note is %d\n",e);
 }
  f=d-(e*100);

  if((f/50)>=1)
 {
 g=f/50;
printf("num of 50 note is %d\n",g);
 }
  h=f-(g*50);

if((h/20)>=1)
 {
 j=h/20;
printf("num of 20 note is %d\n",j);
 }
  k=h-(g*20);
  if((k/10)>=1)
 {
 l=k/10;
printf("num of 10 note is %d\n",l);
 }
 return 0;

}