#include <stdio.h>
// remember to use -lm flag with gcc
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter a, b, c in ax² + bx + c: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int D = b * b - 4 * a * c;
    int complex = 0;
    if (D < 0) {
        complex = 1;
        D = -D;
    }

    double term1 = -b / (2.0 * a);
    double term2 = sqrt(D) / (2.0 * a);

    if (complex) {      // complex roots
        printf("roots are %lf ± %lfi\n", term1, term2);
    } else if (D == 0.0) { // equal roots
        printf("two equals roots: %lf\n", term1);
    } else {            // real roots
        printf("roots are %lf ± %lf\n", term1, term2);
    }
    return 0;
}