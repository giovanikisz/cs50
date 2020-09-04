#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long card; //card number from input
    int i = 0, check = 0, mult_by_2; //counter/length of the card number, sum from card digts with rules, even digit * 2
    card = get_long("Card number: ");
    long flag = card; //store card number in another variable

    do //loop to check card number's sum
    {
        if (i % 2 != 0) // even position (* digit by 2)
        {
            mult_by_2 = 2 * (card % 10);
            if (mult_by_2 < 10) //if mult has one digit
            {
                check = check + mult_by_2;
            }
            else //if mult has two digit
            {
                check = check + mult_by_2 % 10; //sum the unity
                mult_by_2 = mult_by_2 / 10;
                check = check + mult_by_2; //sum the ten
            }
            card = card / 10; //go to the next digit right to left

        }

        if (i % 2 == 0) // odd position (don't multiple)
        {
            check = check + (card % 10);
            card = card / 10;
        }
        
        i++;
    }
    while (card != 0); //while we can get % 10

    if (check % 10 == 0) //if the sum's last digit is 0
    {
        if (i == 15) //checking lenght for amex
        {
            if (flag / 10000000000000 == 34 || flag / 10000000000000 == 37) //checking starting digits for amex
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
            
        }
        else if (i == 16) //checking lenght for visa or mastercard
        {
            if (flag / 1000000000000000 == 4) //checking starting digits for visa
            {
                printf("VISA\n");
            }
            else if (flag / 100000000000000 >= 51 && flag / 100000000000000 <= 55) //checking starting digits for mastercard
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else if (i == 13) //checking lenght for visa
        {
            if (flag / 1000000000000 == 4) //checking starting digits for visa
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    
}