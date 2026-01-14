#include <stdio.h>

int main(void) {

  int i, factorial_i;
  float e = 1.0, n;

  printf("last term less than : ");
  scanf("%f", &n);

  for (i = 1, factorial_i = 1; 1.0 / factorial_i >= n; i++) {
    factorial_i *= i;
    e += 1.0 / factorial_i;
    printf("%f \n", e);
  }

  return 0;
}
