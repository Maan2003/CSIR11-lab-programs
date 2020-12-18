#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter 3 numbers seperated with space: ");
    scanf("%d %d %d", &a, &b, &c);
    
    // lets assume a is maximum
    int max = a;
    
    if (b > max) {
        // assumption is wrong, now assume b is maximum
        max = b;
    }
    if (c > max) {
        // assumption is wrong, so c is maximum
        max = c;
    }
    printf("maximun is %d\n", max);

    return 0;
}