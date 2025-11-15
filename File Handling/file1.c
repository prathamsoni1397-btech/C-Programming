
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char fname[50], ch;
    int lines=0, words=0, chars=0, spaces=0;
    int inword=0;

    printf("Enter file name: ");
    scanf("%s",fname);

    fp = fopen(fname,"r");
    if(fp == NULL){
        printf("File not found\n");
        return 0;
    }

    while((ch=fgetc(fp))!=EOF){
        chars++;

        if(ch==' ' || ch=='\t'){
            spaces++;
            inword=0;
        }
        else if(ch=='\n'){
            lines++;
            inword=0;
        }
        else{
            if(inword==0){
                words++;
                inword=1;
            }
        }
    }

    fclose(fp);

    printf("\nTotal Lines : %d\n",lines);
    printf("Total Words : %d\n",words);
    printf("Total Characters : %d\n",chars);
    printf("Total Spaces : %d\n",spaces);

    return 0;
}
