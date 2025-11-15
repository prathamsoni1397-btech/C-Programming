
#include <stdio.h>
#include <string.h>

int main() {
    char book1[50], book2[50], book3[50];
    char *books[3];   

    books[0] = book1;
    books[1] = book2;
    books[2] = book3;


    for (int i = 0; i < 3; i++) {
        printf("Enter Book %d name: ", i + 1);
        scanf(" %[^\n]", books[i]);  
    }

    for (int i = 0; i < 3; i++) {
        printf("Book %d: %s\n", i + 1, books[i]);
    }

    return 0;
}
