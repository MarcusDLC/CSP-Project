#include <stdio.h>
int main(void){
    int age;
    printf("This program calculates whether you qualify to do these specific actions. Please enter your age to being the process");
    scanf("%d", &age);
    if (age >= 18){
        printf("You qualify to vote!\n");
    }else{
        printf("You do not qualify to vote.\n");
    }if (age >= 16){
        printf("You qualify to drive!\n");
    }else{
        printf("You do not qualify to drive.\n");
    }if (age >= 15){
        printf("You qualify to get a learner's permit!\n");
    }else{
        printf("You do not qualify to get a learner's permit.\n");
    }if (age >= 5){
        printf("You qualify to got to school!\n");
    }else{
        printf("You do not qualify to go to school.\n");
    return 0;
}}