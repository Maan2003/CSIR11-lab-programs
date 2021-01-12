#include <stdio.h>

int main() {
        int n;
        printf("Enter number: ");
        scanf("%d", &n);
        int div_5 = n % 5 == 0;
        int div_11 = n % 11 == 0;

        if (div_11 && div_5) {
                printf("%d is divisible by 5 and 11", n);
        } else if(div_11) {
                printf("%d is divisible by 11", n);
        } else if(div_5) {
                printf("%d is divisible by 5", n);
        } else {
                printf("%d is not divisible by 5 or 11", n);
        }
        
        return 0;
}