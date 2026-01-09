#include <stdio.h>

int main(void)
{
    float loan_amount, interest, monthly_payment, after_first_payment, after_second_payment, after_third_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter Interest Rate:");
    scanf("%f", &interest);

    printf("Enter Monthly Payment:");
    scanf("%f", &monthly_payment);

    after_first_payment = loan_amount + (loan_amount*interest)/(100*12) - monthly_payment;

    printf("Balance Remaining after first payment: $%.2f \n", after_first_payment);

    after_second_payment = after_first_payment + (after_first_payment* interest)/(100*12) - monthly_payment;

    printf("Balance remaining after second payment: $%.2f \n ", after_second_payment);

    after_third_payment = after_second_payment + (after_second_payment*interest)/(100*12) - monthly_payment;

    printf("Balance remaining after third payment: $%.2f \n", after_third_payment);


    return 0;
}