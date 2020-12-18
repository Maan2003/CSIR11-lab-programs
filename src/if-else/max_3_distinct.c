#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers seperated with space: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int max;
    if (a > b && a > c) {
        max = a;
    } else if (b > a && b > c) {
        max = b;
    } else if (c > a && c > b) {
        max = c;
    } else {
        printf("numbers should be distinct\n");
        // invalid input exit code
        // see more: https://www.freebsd.org/cgi/man.cgi?query=sysexits
        return 65;
    }
    printf("%d is maximum", max);
    return 0;
}