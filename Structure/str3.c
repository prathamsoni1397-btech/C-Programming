
#include<stdio.h>
#include<string.h>
struct student_data{
    int roll;
    char name[100];
    int phy;
    int mat;
    int chem;
    int total;

};

int  main(){
    int n,i;
    printf("Enter No Of student :");
    scanf("%d",&n);
    struct student_data s[n];
    printf("Enter Student Details :\n");

    for(i=0;i<n;i++){
        printf("Student %d \n",i+1);
        printf("Enter Roll No :");
        scanf("%d",&s[i].roll);

        printf("Enter Name :");
        fflush(stdin);
        gets(s[i].name);

         printf("Enter Marks in Physics :");
        scanf("%d",&s[i].phy);

         printf("Enter Marks in Maths :");
        scanf("%d",&s[i].mat);

         printf("Enter Marks Chemistry :");
        scanf("%d",&s[i].chem);

        s[i].total=s[i].phy+s[i].chem+s[i].mat;
        printf("\n");
    }

    int r,count;
    printf("Enter Roll No Of Wich Details Is To Be Checked:");
    scanf("%d",&r);

    for(i=0;i<n;i++){
        if(s[i].roll!=r){
            count=1;
        }
    }
    if(count == 1) printf("Invalid Input");

    for(i=0;i<n;i++){
        if(s[i].roll==r){
             printf("Roll No : %d \n",s[i].roll);
             printf("Name of student  :%s \n",s[i].name);
             printf("Marks in Physics :%d \n",s[i].phy);
             printf("Marks in Maths :%d \n",s[i].mat);
             printf("Marks Chemistry :%d \n",s[i].chem);
             printf("Total Marks :%d \n",s[i].total);
            break;
        }

       
    }

    
    return 0;
}
