#include <stdio.h>

int main()
{
  int n, sum = 0;
  printf("Enter n --> ");
  scanf("%d", &n);
  while (n > 0)
  {
    sum += n%10;
    n /= 10;
  }
  printf("\nThe sum is --> %d\n", sum);
}
