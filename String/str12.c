
#include<stdio.h>
#include<string.h>

int main (){
    char str[100];
    int fa=0,fe=0,fi=0,fo=0,fu=0;
    printf("Enter String :");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='A'){
          fa++;
        }
       if(str[i]=='e' || str[i]=='E'){
          fe++;
        }
        if(str[i]=='i' || str[i]=='I'){
          fi++;
        }
        if(str[i]=='o' || str[i]=='O'){
          fo++;
        }
        if(str[i]=='u' || str[i]=='U'){
          fu++;
        } 
    }

    printf("Frequency Of Vovels:- \n");
    printf("A :%d \n",fa);
    printf("E :%d \n",fe);
    printf("I :%d \n",fi);
    printf("O :%d \n",fo);
    printf("U :%d \n",fu);
    return 0;
}
