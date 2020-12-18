#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers seperated with space: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max;
    if (a > b && a > c) {
        printf("first is maximum\n");
    } else if (b > a && b > c) {
        printf("second is maximum\n");
    } else if (c > a && c > b) {
        printf("third is maximum\n");
    } else if (a == b) {
        printf("first and second are maximum\n");
    } else if (a == c) {
        printf("first and third are maximum\n");
    } else if (b == c) {
        printf("second and third are maximum\n");
    }
    return 0;
}