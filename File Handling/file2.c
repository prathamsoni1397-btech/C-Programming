
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *fp;
    char line[200];

    fp = fopen("data.txt","w");
    if(fp == NULL){
        printf("File not found\n");
        return 0;
    }

    printf("Enter lines (type stop to end):\n");
    while(1){
        gets(line);
        if(strcmp(line,"stop")==0)
            break;
        fputs(line,fp);
        fputs("\n",fp);
    }

    fclose(fp);
    printf("File written successfully.\n");
    return 0;
}
