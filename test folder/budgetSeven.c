#include <stdio.h>

int main(void){
    float income, transportation, rent, utilities, groceries, expenses, savings, total;
    float prent, putilities, ptransportation, pgroceries, pexpenses, psavings;
    printf("This is going to calculate your budget for you\n");
    printf("How much do you make a month?\n");
    scanf("%f", &income);
    printf("How much is groceries?\n");
    scanf("%f", &groceries);
    printf("How much is utilities?\n");
    scanf("%f", &utilities);
    printf("How much is transportation?\n");
    scanf("%f", &transportation);
    printf("How much is rent?\n");
    scanf("%f", &rent);
    expenses = rent + utilities + groceries + transportation;
    savings = income *.2;
    total = income - expenses - savings;
    prent = rent/income;
    putilities = utilities/income;
    pgroceries = groceries/income;
    ptransportation = transportation/income;
    pexpenses = expenses/income;
   
    printf("Your income is: $%.2f\n", income);
    printf("Your expenses is: $%.2f\n", expenses);
    printf("Your savings are: $%.2f\n", savings);
    printf("Your total left to spend is: $%.2f\n", total);
    printf("Your rent is %.2f", prent, "of your income\n");
    printf("Your transportation is %.2f", ptransportation, "of your income\n");
    printf("Your groceries  is %.2f", pgroceries, "of your income\n");
    printf("Your utitilies is %.2f", putilities, "of your income\n");
    printf("Your savings is %.2f", psavings, "of your income.\n");
    printf("Your expenses is %.2f", pexpenses, "of your income.\n");
    return 0;
}