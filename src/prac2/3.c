#include <stdio.h>

int main() {
        char c;
        printf("Enter number: ");
        scanf("%c", &c);
        
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                printf("%c is a alphabet\n", c);
                if (c == 'a' || c == 'e' ||
                    c == 'i' || c == 'o' ||
                    c == 'u' || c == 'A' ||
                    c == 'E' || c == 'I' ||
                    c == 'O' || c == 'U' 
                ) {
                        printf("%c is vowel\n", c);
                } else {
                        printf("%c is consonant\n", c);
                }
        } else {
                printf("%c is not a alphabet\n", c);
        }
        return 0;
}