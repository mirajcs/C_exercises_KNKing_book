#include <stdio.h>

int main(void) {
  int n1, n2, n3, n4;
  int max1, max2, min1, min2;
  int largest, smallest;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  if (n1 > n2) {
    max1 = n1;
    min1 = n2;
  } else {
    max1 = n2;
    min1 = n1;
  }

  if (n3 > n4) {
    max2 = n3;
    min2 = n4;
  } else {
    max2 = n4;
    min2 = n3;
  }

  if (max1 > max2)
    largest = max1;
  else
    largest = max2;

  if (min1 > min2)
    smallest = min2;
  else
    smallest = min1;

  printf("Largest: %d \n", largest);
  printf("Smallest: %d \n", smallest);

  return 0;
}
