#include <stdio.h>

int main()
{
    float amount[] = {0.49, 1.27, 0.75, 1.31, 0.83};

    int x;
    for(x=0; x<5; x++)
    {
        int coins, quarters, dimes, nickels, pennies;
        coins = amount[x]*100;
        quarters = coins/25;
        coins %= 25;
        dimes = coins/10;
        coins %= 10;
        nickels = coins/5;
        coins %= 5;
        pennies = coins;
        printf("Making change for: $%.2f\n",amount[x]);
        printf("\t%d quarters, %d dimes, %d nickels, %d pennies\n",quarters, dimes, nickels, pennies);
    }

    return 0;
}
