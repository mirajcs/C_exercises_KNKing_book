#include <stdio.h>

int main(void) {
  int n;

  printf("Enter numerical grade: ");
  scanf("%d", &n);

  if (n < 0 || n > 100) {
    printf("Illegal Grade");
    return 0;
  }

  switch (n / 10) {
  case 10:
  case 9:
    printf("Letter Grade A \n");
    break;
  case 8:
    printf("Letter Grade B \n");
    break;
  case 7:
    printf("Letter Grade C \n");
    break;
  case 6:
    printf("Letter Grade D \n");
    break;
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    printf("Letter grade F \n");
    break;
  }

  return 0;
}
