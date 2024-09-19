#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20], place[20], verb[20], noun[20], sentence[500];
    printf("Type in a name!");
    scanf("%s", name);
    printf("Type in a place!");
    scanf("%s", place);
    printf("Type in a past tense verb!");
    scanf("%s", verb);
    printf("Type in a noun!");
    scanf("%s", noun);
    strcat(sentence, name);
    strcat(sentence, " went to the ");
    strcat(sentence, place);
    strcat(sentence, " where they ");
    strcat(sentence, verb);
    strcat(sentence, " and bought a ");
    strcat(sentence, noun);
    strcat(sentence, ".");
    printf("%s", sentence);
   
    //printf("%s went to the %s where they %s and bought a %s.", name, place, verb, noun);


    return 0;
}