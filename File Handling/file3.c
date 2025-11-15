
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char text[200];

    fp = fopen("data.txt","r");
    if(fp == NULL){
        printf("File not found\n");
        return 0;
    }

    printf("File content:\n\n");
    while(fgets(text,200,fp)!=NULL){
        printf("%s",text);
    }

    fclose(fp);
    return 0;
}
