#include <stdio.h>
int main(void){
    char user_input [30];
    printf("What is your name?:\n");
    scanf("%s", user_input);
    printf("Hello %s",user_input);
    
    return 0;
}