
#include<stdio.h>
#include<string.h>
struct crick{
    char name[100];
    int age;
    int test;
    int runs;

};
int main(){
    int i,j;
    struct crick s[10], temp;
    for(i=0;i<10;i++){
        printf("Crickter %d:\n",i+1);
        printf("Enter Name:");
        fflush(stdin);
        gets(s[i].name);

        printf("Enter Age:");
        scanf("%d",&s[i].age);

        printf("Enter No Of Test Matches Played:");
        scanf("%d",&s[i].test);

        printf("Enter Average Runs:");
        scanf("%d",&s[i].runs);
        printf("\n");
    }

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(s[i].runs>s[j].runs){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }

 printf("Cricketers Sorted by Average Runs (Ascending Order):\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Test Matches: %d\n", s[i].test);
        printf("Average Runs: %d\n", s[i].runs);
        printf("\n");
    }

    return 0;
}

