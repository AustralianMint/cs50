#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("How many fries yall want? ");
    for (int i = 0; i < n; i++)
    {
        printf("🍟");
        printf("\n");
    }



}
