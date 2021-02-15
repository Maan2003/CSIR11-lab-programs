#include <stdio.h>

int main()
{
  int dd, mm, yyyy;
  printf("Enter day: ");
  scanf("%d", &dd);
  printf("Enter month: ");
  scanf("%d", &mm);
  printf("Enter year: ");
  scanf("%d", &yyyy);

  switch (mm) {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    dd = 31 - dd;
    break;

  case 2:
    // account for leap year
    dd = (yyyy % 4) ? 28 : 29 - dd;
    break;

  case 4: case 6: case 9: case 11:
    dd = 30 - dd;
    break;

  default:
      puts("Invalid Input");
      return 1;
  }

  printf("Remaining Days: %d\n", dd);
}
