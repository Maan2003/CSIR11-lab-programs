#include <stdio.h>

int main()
{
  float num1, num2, product;
  int ch = /* Start Fresh */ 2, flag = /* input not taken yet */ 0;
  char op;

  while(1) {
    if (flag == /* Input taken */ 1)
    {
      puts("1. Continue with this result");
      puts("2. Start fresh");
      puts("3. Exit");
      puts("Enter your choice: ");
      scanf("%d", &ch);

      if (ch == /* Exit */ 3) break;
    }

    flag = 1;

    if (ch == /* start Fresh */ 2)
    {
      printf("Enter first number : ");
      scanf("%f", &num1);
    }
    else {
      num1 = product;
    }

    printf("Enter second number : ");
    scanf("%f", &num2);
    printf("Enter operator [+,-,*,/]: ");
    scanf(" %c", &op);
    switch (op)
    {
      case '+':
	product = num1 + num2;
	printf("\nThe sum is : %f\n", product);
	break;

      case '-':
	product = num1 - num2;
	printf("\nThe difference is : %f\n", product);
	break;

      case '*':
	product = num1 * num2;
	printf("\nThe product is : %f\n", product);
	break;

      case '/':
	product = num1 / num2;
	printf("\nThe quotient is : %f\n", product);
	break;
    }
  }
  return 0;
}
