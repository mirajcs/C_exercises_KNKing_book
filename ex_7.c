#include <stdio.h>

int main(void)
{
    int amount, bills_20, bills_10, bills_5, bills_1;

    printf("Enter amount: ");
    scanf("%d", &amount);

    bills_20 = (amount / 20);
    
    printf("$20 bills: %d \n", bills_20);

    bills_10 = (amount / 10) - bills_20 * 2;

    printf("$10 bills: %d \n", bills_10);

    bills_5 = (amount / 5) - (amount / 10)*2;

    printf("$5 bills: %d \n", bills_5);

    bills_1 = (amount / 1) - (amount / 5)*5; 

    printf("$1 bills: %d \n", bills_1);

    return 0;
}