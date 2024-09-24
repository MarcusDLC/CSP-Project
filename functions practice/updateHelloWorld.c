#include <stdio.h>
void name(char name[]){
    printf("Hello %s", name);
}
int main(void){
    name("Victoria\n");
    name("Francis\n");
    name("Markus\n");
    name("Fernanda\n");
    name("Alexandra\n");

    return 0;
}