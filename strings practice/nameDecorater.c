#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20];
    char first[]= "(:(:(:";
    char last[]= ":):):)";
    char product[100];
    printf("Welcome to the smiley face decorator, please enter your name for the process to begin:\n");
    scanf("%s", name);
    strcat(product, first);
    strcat(product, name);
    strcat(product, last);
    printf("%s\n", product);
    return 0;
}