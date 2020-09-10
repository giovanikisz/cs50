#include <stdio.h>
#include <cs50.h> //library from CS50 course

//create main function with no return
int main(void)
{
    string name = get_string("What's your name?\n"); //ask and storage the user's name
    printf("hello, %s\n", name); //print hello with the user's name
}