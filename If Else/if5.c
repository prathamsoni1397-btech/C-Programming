#include<stdio.h>

int main(){
    float a;
    printf("Enter Gross Sales :");
    scanf("%f",&a);

    if(a>20000){
        printf("Net Sales :%f \n",a-0.15*a);
    }

    else if (a>10000){
        printf("Net Sales  :%f \n",a-0.1*a);
    }

    else
        printf("Net Sales :%f \n",a-0.05*a);
return 0;
}

