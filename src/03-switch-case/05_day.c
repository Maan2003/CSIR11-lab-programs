#include <stdio.h>

int main()
{
  int day, month, year;
  printf("Enter day : ");
  scanf("%d", &day);
  printf("Enter month : ");
  scanf("%d", &month);
  printf("Enter year : ");
  scanf("%d", &year);

  int mon, y = year % 100, c = year / 100;

  if(month > 2)
    mon = month;
  else
    mon = (12 + month);

  int w = day + (13*(mon+1))/5 + y + y/4 + c/4 + 5*c;
  w = w % 7;

  const char* day_name;

  switch (w + 1) {
  case 1:
    day_name = "Monday";
    break;
  case 2:
    day_name = "Tuesday";
    break;
  case 3:
    day_name = "Wednesday";
    break;
  case 4:
    day_name = "Thrusday";
    break;
  case 5:
    day_name = "Friday";
    break;
  case 6:
    day_name = "Saturday";
    break;
  case 7:
    day_name = "Sunday";
    break;

  default:
    puts("Invalid input");
    return 1;
  }

  printf("It is %s\n", day_name);
  return 0;
}
