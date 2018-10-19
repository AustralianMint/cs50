#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("What is your name: ");
    int number = get_int("Gimme a number: ");

    for (int i = 0; i < number; i++){
        printf("%s %i \n", s, number);
    }

}