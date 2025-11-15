
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    char *word;
    char lastName[50];
    char result[100] = "";

    printf("Enter full name: ");
    gets(name);

    word = strtok(name, " ");
    while (word != NULL) {
        strcpy(lastName, word);
        word = strtok(NULL, " ");
        if (word != NULL) {
            char temp[5];
            sprintf(temp, "%c. ", toupper(lastName[0]));
            strcat(result, temp);
        }
    }
    strcat(result, lastName);
    printf("Abbreviated name: %s\n", result);
    return 0;
}
