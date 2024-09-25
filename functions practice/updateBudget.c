#include <stdio.h>
float income, transportation, rent, utilities, groceries, expenses, savings, total;

float input(char type[], float vari){
    printf("How much is your %s: \n", type);
     scanf("%f", &vari);
     return vari;
}


void percent(char type[], int amount){
    int per = amount/income*100;
    printf("Your %s is %d%% of your income\n", type, per);
}


    int main(void){
    printf("This is going to calculate your budget for you\n");
    income = input("income", income);
    rent = input("rent", rent);
    utilities = input("utilities", utilities);
    groceries = input("groceries", groceries);
    transportation = input("transportation", transportation);
    expenses = rent + utilities + groceries + transportation;
    savings = income *.2;
    total = income - expenses - savings;

    printf("Your income is: $%.2f\n", income);
    printf("Your expenses is: $%.2f\n", expenses);
    printf("Your savings are: $%.2f\n", savings);
    printf("Your total left to spend is: $%.2f\n", total);

    percent("rent", rent);
    percent("utilities", utilities);
    percent("groceries", groceries);
    percent("transportation", transportation);
    percent("savings", savings);
    return 0;
}