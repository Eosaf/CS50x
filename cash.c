#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int coins = 0;

    //Prompting + Validating input
    int cost;
    do
    {
        cost = get_int("Change owed: ");
    }
    while (cost<=0);

    //Quarters 25c
        while(cost>=25)
        {
            cost = cost - 25;
            coins++;
        }

    //Dimes 10c
        while(cost>=10)
        {
            cost = cost - 10;
            coins++;
        }

    //Nickles 5c
        while(cost>=5)
        {
            cost = cost - 5;
            coins++;
        }

    //Pennies 1c
        while(cost>=1)
        {
            cost = cost - 1;
            coins++;
        }


    //Printing sum of coins
    printf("%i\n",coins);
}
