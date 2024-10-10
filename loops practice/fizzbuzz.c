#include <stdio.h>
#include <string.h>
#include <time.h>
int i;
int user_input;
char uno[50], dos[50], tres[50];

void delay(int secs){
    int milli = 1000 * secs;

    clock_t start = clock();

    while(clock()< start + milli);
}

int main(void){
    printf("Give me a number: ");
    scanf("%d", &user_input);
    printf("Give me a word: ");
    scanf("%s", uno);
    printf("Give me another word: ");
    scanf("%s", dos);
    strcat(tres, uno);
    strcat(tres, dos);
    
    //create a loop that counts to 50
    for(i=1; i<=user_input; i++){
    
        //replace #'s divisible by both with "Fizzbuzz"
        if(i%3==0 && i%5==0){
            printf("%s\n", tres);

        //replace #'s divisible by 3 with "Fizz"
        }else if (i%3==0){
        printf("%s\n", uno);

        //replace #'s divisible by 5 with "Buzz"
        }else if (i%5==0){
            printf("%s\n", dos);

        //print all other numbers
        }else{
            printf("%d\n", i);
        }
        delay(26);
    }
    return 0;
}