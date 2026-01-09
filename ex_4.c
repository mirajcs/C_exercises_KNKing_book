#include <stdio.h>

int main(void)

{
    float amount, tax_added_amount; 

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax_added_amount = amount + amount * (5.0f / 100);
    
    printf("                 _____________\n");
    printf("with tax added: $  %.2f\n", tax_added_amount);

    return 0;
}