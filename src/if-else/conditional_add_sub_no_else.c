#include <stdio.h>

int main() {
        int a, b;
        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);

        int result;

        if (a > b) {
                result = a + b;
        }
        if (b > a) {
                result = a - b;
        }

        printf("The result is %d\n", result);
        return 0;
}