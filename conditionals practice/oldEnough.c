#include <stdio.h>
int main(void){
    int age;
    printf("This program calculates whether you qualify to do these specific actions. Please enter your age to being the process");
    scanf("%d", &age);

    if (age >= 18){
        printf("You qualify to vote!\n");
    }else if (age >= 16){
        printf("You qualify to drive!\n");
    }else if (age >= 15){
        printf("You qualify to get a learner's permit!\n");
    }else if (age >= 5){
        printf("You qualify to got to school!\n");
    }else {
        printf("You are too young to go to school.");
    }
      
    return 0;

}