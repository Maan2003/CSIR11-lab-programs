#include <stdio.h>

int main() {
        int a, b, c, d;
        printf("Enter 4 numbers seperated with space: ");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        int max = a;

        if (b > max) {
                max = b;
        }
        if (c > max) {
                max = c;
        }
        if (d > max) {
                max = d;
        }
        printf("maximum is %d\n", max);

        return 0;
}