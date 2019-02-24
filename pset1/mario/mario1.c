#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /* Declaring that there is gonna be an int called n */
    int n;

    /* Promting for positive number until it's done n */
    do
    {
        n = get_int("Positive Number: ");
    }
    while(n <= 0);

    /* First loop for positioning which row you're in */
    for (int i = 0; i < n; i++)
    {
        /* Second loop printing out how many collumns. */
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}