
#include <stdio.h>

int main(void) {
  int n;
  const char *m = "", *k = "";

  printf("Enter a two-digit number: ");
  scanf("%d", &n);

  if (n >= 10 && n <= 19) {
    switch (n) {
    case 10:
      printf("Ten");
      break;
    case 11:
      printf("Eleven");
      break;
    case 12:
      printf("Twelve");
      break;
    case 13:
      printf("Thirteen");
      break;
    case 14:
      printf("Fourteen");
      break;
    case 15:
      printf("Fifteen");
      break;
    case 16:
      printf("Sixteen");
      break;
    case 17:
      printf("Seventeen");
      break;
    case 18:
      printf("Eighteen");
      break;
    case 19:
      printf("Nineteen");
      break;
    }
    return 0;
  }

  switch (n % 10) {
  case 1:
    m = "one";
    break;
  case 2:
    m = "two";
    break;
  case 3:
    m = "three";
    break;
  case 4:
    m = "four";
    break;
  case 5:
    m = "five";
    break;
  case 6:
    m = "six";
    break;
  case 7:
    m = "seven";
    break;
  case 8:
    m = "eight";
    break;
  case 9:
    m = "nine";
    break;
  case 0:
    m = "";
    break;
  }

  switch (n / 10) {
  case 2:
    k = "twenty";
    break;
  case 3:
    k = "thirty";
    break;
  case 4:
    k = "forty";
    break;
  case 5:
    k = "fifty";
    break;
  case 6:
    k = "sixty";
    break;
  case 7:
    k = "seventy";
    break;
  case 8:
    k = "eighty";
    break;
  case 9:
    k = "ninety";
    break;
  }

  printf("You entered the number %s%s%s ", k, (n % 10 != 0) ? "-" : "", m);
  return 0;
}
