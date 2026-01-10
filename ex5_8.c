#include <stdio.h>

int main(void) {
  int hour, minute;
  int time;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  time = hour * 60 + minute;

  if (time <= (8 * 60 + 9 * 60 + 43) / 2)
    printf("Closest depature time is 8:00 a.m., arriving at 10.16 p.m.\n ");
  else if (time <= (9 * 60 + 43 + 11 * 60 + 19) / 2)
    printf("Closest depature time is 9.43 a.m., arrivnig at 11.52 a.m.\n ");
  else if (time <= (11 * 60 + 19 + 12 * 60 + 47) / 2)
    printf("Closest depature time is 11.19 a.m., arrivnig at 1.31 p.m. \n");
  else if (time <= (12 * 60 + 47 + 14 * 60) / 2)
    printf("closest depature time is 12.47 p.m., arriving 3.00 p.m. \n");
  else if (time <= (14 * 60 + 15 * 60 + 45) / 2)
    printf("Closest depature time is 2.00 p.m., arriving 4.08 p.m.\n ");
  else if (time <= (15 * 60 + 45 + 19 * 60) / 2)
    printf("Closest depature time is 3.45 p.m., arriving 5.55 p.m.\n ");
  else if (time <= (19 * 60 + 21 * 60 + 45) / 2)
    printf("Closest depature time is 7.00 p.m., arriving 9.20 p.m. \n ");
  else
    printf("Closest depature time is 9.45 p.m., arriving 11.58 p.m. \n");

  return 0;
}
