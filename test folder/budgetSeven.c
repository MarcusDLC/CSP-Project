#include <stdio.h>

int main(void){
    float income, transportation, rent, utilities, groceries, expenses, savings, total;
    float prent, putilities, ptransportation, pgroceries, pexpenses;
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
    printf("Your rent is %.2f", prent, "of your income");
    printf("Your rent is %.2f", prent, "of your income");
    printf("Your rent is %.2f", prent, "of your income");
    printf("Your rent is %.2f", prent, "of your income");
    return 0;
}