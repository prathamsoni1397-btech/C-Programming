#include<stdio.h>
int main()
{
    int grosssalary,allowance,deduction,netsalary;
    printf("Enter Gross Salary:");
    scanf("%d",&grosssalary);
    allowance=grosssalary/10;
    deduction=(grosssalary*3)/100;
    netsalary=grosssalary+allowance-deduction;
    printf("The Net Salary Is:%d",netsalary);

    return 0;
}