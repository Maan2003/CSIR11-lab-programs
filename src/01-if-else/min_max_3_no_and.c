#include <stdio.h>

int main() {
        int a, b, c;
        printf("Enter 3 numbers seperated with space: ");
        scanf("%d %d %d", &a, &b, &c);

        int max = a, min = a;

        if (b > max) {
                max = b;
        } else {
                // if(b < min) is not required because max and min are same
                // !(b > max) => b <= max => b <= min
                // this will lead to false positive (min == b), but then this
                // statement will be a nop.
                min = b;
        }

        if (c > max) {
                max = c;
        } else if (c < min) {
                min = c;
        }

        printf("maximun is %d\n", max);
        printf("minimun is %d\n", min);

        return 0;
}