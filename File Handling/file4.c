
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int roll;
    char name[50];
    char ch;

    fp = fopen("student.csv","w");
    if(fp == NULL){
        printf("File not created\n");
        return 0;
    }

    fprintf(fp,"Roll No,Name\n");

    do{
        printf("Enter roll no: ");
        scanf("%d",&roll);
        printf("Enter name: ");
        fflush(stdin);
        gets(name);
        fprintf(fp,"%d,%s\n",roll,name);

        printf("Do you want to add more record (y/n): ");
        scanf(" %c",&ch);
    }while(ch=='y' || ch=='Y');

    fclose(fp);
    printf("Data stored in student.csv successfully.\n");
    return 0;
}
