#include <stdio.h>

int main()
{
  int n;
  printf("Enter day: ");
  scanf("%d", &n);

  const char* day;

  switch (n) {
  case 1:
    day = "Monday";
    break;
  case 2:
    day = "Tuesday";
    break;
  case 3:
    day = "Wednesday";
    break;
  case 4:
    day = "Thrusday";
    break;
  case 5:
    day = "Friday";
    break;
  case 6:
    day = "Saturday";
    break;
  case 7:
    day = "Sunday";
    break;

  default:
    puts("Invalid input");
    return 1;
  }

  printf("It is %s\n", day);
  return 0;
}
