#include <stdio.h>

int main(void) {
  int mm1, mm2, dd1, dd2, yy1, yy2;

  printf("Enter the first date (mm/dd/yy) : ");
  scanf("%d/%d/%d", &mm1, &dd1, &yy1);

  while (1) {
    printf("Enter next date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &mm2, &dd2, &yy2);

    if (yy2 == 0 && mm2 == 0 && dd2 == 0)
      break;

    if (yy2 < yy1 || (yy2 == yy1 && mm2 < mm1) ||
        (yy2 == yy1 && mm2 == mm1 && dd2 < dd1)) {
      yy1 = yy2;
      mm1 = mm2;
      dd1 = dd2;
    }
  }

  printf("%d/%d/%d is the earliest date.", mm1, dd1, yy1);

  return 0;
}
