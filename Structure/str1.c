
#include<stdio.h>
#include<string.h>

struct student{
int roll;
char name[100];
char course[100];
char major[100];
char minor[100];
};
int main(){
struct student s[10];
for(int i=0;i<10;i++){
    printf("Student %d \n",i+1);

    printf("Enter Roll No:");
    scanf("%d",&s[i].roll);

    printf("Enter Name :");
    fflush(stdin);
    gets(s[i].name);

    printf("Enter Course :");
    gets(s[i].course);

    printf("Enter Major Subject :");
    gets(s[i].major);

    printf("Enter Minor Subject :");
    gets(s[i].minor);

   printf("\n");
}
printf("Names Are :\n");

for(int i=0;i<10;i++){
    printf("%s \n",s[i].name);
    }
    int r,m;
    printf("Enter Roll No:");
    scanf("%d",&r);

    for(int i=0;i<10;i++){
        if(r==s[i].roll){
           printf("Roll No       :%d",s[i].roll);
           printf("Name          :%s",s[i].name);
           printf("Course        :%s",s[i].course);
           printf("Major Subject :%s",s[i].major);
           printf("Minor Subject :%s",s[i].minor);
           m=1;
           return;
        }

    }

    if(m!=1) printf("Invalid Roll no");
   return 0;
}

