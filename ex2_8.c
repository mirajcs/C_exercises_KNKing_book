#include <stdio.h>

int main(void) {
  float loan_amount;
  int i, no_of_payments;

  printf("Enter amount of loan : ");
  scanf("%f", &loan_amount);

  printf("No of p[ayments :");
  scanf("%d", &no_of_payments);

  for (i = 1; i <= no_of_payments; i++) {
    printf("Balance remaining after month %d = %.2f \n", i,
           loan_amount - i * (loan_amount / no_of_payments));
  }

  return 0;
}
