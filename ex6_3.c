#include <stdio.h>

int main(void) {
  int n, m, n1, m1, remainder;

  printf("Enter fraction: ");
  scanf("%d/%d", &n, &m);

  n1 = n;
  m1 = m;

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  printf("In lowest terms: %d/%d \n", n1 / m, m1 / m);

  return 0;
}
