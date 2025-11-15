
#include<stdio.h>
void leapyear(int y);
int main(){
   int y;
   printf("Enter Year:");
   scanf("%d",&y);
    leapyear(y);
return 0;
}

void leapyear(int y){
    if(y%4==0 && y%100!=0 || y%400==0){
        printf("%d is leap year",y);
    }
    else printf("%d is not a leap year",y);
}
