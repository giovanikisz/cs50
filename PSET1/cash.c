//including libraries
#include <stdio.h>
#include <cs50.h> //library from CS50 course
#include <math.h>

//create the main function
int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("Change owed: "); //get the change owed from the user
    }
    while (dollar <= 0);

    int change = round(dollar * 100); //convert the change to an int variable to avoid erros
    int coins = 0; // create counter

    while (change >= 25) //count while you can give quarters
    {
        change -= 25;
        coins++;
    }
    while (change >= 10) //count while you can give dimes
    {
        change -= 10;
        coins++;
    }
    while (change >= 5) //count while you can give nickels
    {
        change -= 5;
        coins++;
    }
    while (change >= 1) //count while you can give pennies
    {
        change -= 1;
        coins++;
    }

    printf("%i\n", coins); //display the amount of coins
}