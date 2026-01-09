#include <stdio.h>

int main(void) {

  int n, m;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &n, &m);

  if (n == 0) {
    printf("Equivalent 12-hour time: 12:%02d AM\n", m);
  }
  else if (n < 12) {
    printf("Equivalent 12-hour time: %d:%02d AM\n", n, m);
  }
  else if (n == 12) {
    printf("Equivalent 12-hour time: 12:%02d PM\n", m);
  }
  else {
    printf("Equivalent 12-hour time: %d:%02d PM\n", n - 12, m);
  }

  return 0;
}
