#include <stdio.h>
int main(void){
    char members[10][20] = {"Marcus", "Katherin", "Fairus", "Marcus", "Aytana", "Micheal"};
    int i;
    printf("My family:\n");
    for(i=0; i<6; i++){
        printf("%s\n Hello ", members[i]);
    }
    
    return 0;
}