#include <stdio.h>

int main(void) {
  float amount;

  printf("Enter the income: ");
  scanf("%f", &amount);

  if (amount <= 750.00f)
    printf("Amount of tax: $%.2f\n", 0.01 * amount);
  else if (amount <= 2250.00f)
    printf("Amount of tax: $%.2f\n", 7.50f + 0.02 * (amount - 750.00f));
  else if (amount <= 3750.00f)
    printf("Amount of tax: $%.2f\n", 37.50f + 0.03 * (amount - 2250.00f));
  else if (amount <= 5250.00f)
    printf("Amount of tax: $%.2f\n", 82.50f + 0.04 * (amount - 3750.00f));
  else if (amount <= 7000.00f)
    printf("Amount of tax: $%.2f\n", 142.50f + 0.05 * (amount - 5250.00f));
  else
    printf("Amount of tax: $%.2f\n", 230.00f + 0.06 * (amount - 7000.00f));

  return 0;
}
