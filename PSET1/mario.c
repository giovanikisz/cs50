//including libraries
#include <stdio.h>
#include <cs50.h> //library from CS50 course

//creating function with no return
int main(void)
{
    int height; //create the variable to store the height
    do //start loop
    {
        height = get_int("Height: "); //store the height value
    }
    while ((height < 1) || (height > 8)); //check if the height is between 1 and 8 (included)

    for (int i = 0; i < height; i++)//loop for each row
    {
        for (int k = 1; k < height - i; k++) //loop for blank spaces
        {
            printf(" ");
        }
        for (int j = 0; j < (i + 1); j++) //loop for let #
        {
            printf("#");
        }
        printf("  "); //create two spaces between each floor of the pyramid
        for (int l = 0; l < (i + 1); l++) //loop for right #
        {
            printf("#");
        }
        printf("\n");
    }
}