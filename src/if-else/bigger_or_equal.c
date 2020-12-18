#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("First is bigger\n");
    } else if (b == a) {
        printf("Numbers are EQUAL\n");
    } else {
        printf("Second is bigger\n");
    }
    return 0;
}