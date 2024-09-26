#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, savings, expenses, spend;
    float prent, putilities, pgroceries, ptransportation, psavings, pexpenses;
    printf("This is a budget calculator.\n How much do you make a month?\n");
    scanf("%f", &income);
    printf("How much does your rent cost?\n");
    scanf("%f", &rent);
    printf("How much does your utilities cost?\n");
    scanf("%f", &utilities);
    printf("How much do your groceries cost?\n");
    scanf("%f", &groceries);
    printf("How much does your transpotation cost?\n");
    scanf("%f", &transportation);
    savings = income * .2;
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;
    printf("You make $%.2f\n", income);
    printf("Your expenses are $%.2f\n", expenses);
    printf("Your savings are $%.2f\n", savings);
    printf("Your spending money is $%.2f\n", spend);
    prent = rent/income *100;
    putilities = utilities/income *100;
    pgroceries = groceries/income *100;
    ptransportation = transportation/income *100;
    psavings = savings/income *100;
    pexpenses = expenses/income *100;
    printf("Your rent is %d%% for your income.", (int) prent);
    printf("Your utilities is %d%% for your income.", (int) putilities);
    printf("Your rent is %d%% for your income.", (int) prent);
    printf("Your rent is %d%% for your income.", (int) prent);
    return 0;
}