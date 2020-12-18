// Program to find the bigger of two number (no else)

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    if (a > b) {
        printf("First number is bigger\n");
    } 
    if (b > a) {
        printf("Second number is bigger\n");
    }
    return 0;
}