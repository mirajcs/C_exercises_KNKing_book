#include <stdio.h>

int main(void) {
  float number, largest = 0;
  int has_input = 0;

  while (1) {
    printf("Enter a number: ");
    scanf("%f", &number);

    if (number <= 0)
      break;

    if (!has_input || number > largest) {
      largest = number;
      has_input = 1;
    }
  }
  if (has_input)
    printf("The largest number entered was %.2f\n", largest);
  else
    printf("No positive numbers were entered.");

  return 0;
}
