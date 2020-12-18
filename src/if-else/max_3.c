#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers seperated with space: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max;
    if (a > b && a > c) {
        printf("first is maximum");
    } else if (b > a && b > c) {
        printf("second is maximum");
    } else if (c > a && c > b) {
        printf("third is maximum");
    } else if (a == b) {
        printf("first and second are maximum");
    } else if (a == c) {
        printf("first and third are maximum");
    } else if (b == c) {
        printf("second and third are maximum");
    }
    return 0;
}