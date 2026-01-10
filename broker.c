/* Calculates a broker's commision*/

#include <stdio.h>

int main(void) {
  float commision, value, per_share_value, commision1;
  int no_of_shares;

  printf("Enter Number of shares: ");
  scanf("%d", &no_of_shares);

  printf("Enter price per share:");
  scanf("%f", &per_share_value);

  value = (float)no_of_shares * per_share_value;

  if (value < 2500.00f)
    commision = 30.00f + 0.017f * value;
  else if (value < 6250.00f)
    commision = 56.00f + 0.0066f * value;
  else if (value < 20000.00f)
    commision = 76.00f + 0.0034f * value;
  else if (value < 50000.00f)
    commision = 100.00f + 0.0022f * value;
  else
    commision = 255.00f + 0.0009f * value;

  if (commision < 39.00f)
    commision = 39.00f;

  printf("Commision: $%.2f \n", commision);

  if (no_of_shares < 2000)
    commision1 = 33.00f + no_of_shares * 0.03f;
  else
    commision1 = 33.00f + no_of_shares * 0.02f;

  printf("Rival broker commision: $%.2f \n", commision1);

  return 0;
}
