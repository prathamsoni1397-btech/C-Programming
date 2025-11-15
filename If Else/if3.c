#include<stdio.h>

int main(){
    float a;
    printf("Enter Gross Salary :",a);
    scanf("%f",&a);

    if(a>10000){
        printf("Net Salary :%f \n",a+(0.1*a)-(0.03*a));
    }

    else if (a>5000){
        printf("Net Salary :%f \n",a+(0.07*a)-(0.02*a));
    }

    else
        printf("Not Applicable");

return 0;

}