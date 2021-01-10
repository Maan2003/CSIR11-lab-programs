#include <stdbool.h>
#include <stdio.h>
// remember to use -lm flag with gcc
#include <math.h>

int main() {
        int a, b, c;
        printf("Enter the polynomial (example: 12x^2 +5x -7)");
        if (scanf("%dx^2 %dx %d", &a, &b, &c) == -1) {
                printf("Invalid format\n");
                // invalid input exit code
                // see more: https://www.freebsd.org/cgi/man.cgi?query=sysexits
                return 65;
        }

        int D = b * b - 4 * a * c;
        // TODO: consider using C's complex type
        bool complex = false;
        if (D < 0) {
                complex = true;
                D = -D;
        }

        double term1 = -b / (2.0 * a);
        double term2 = sqrt(D) / (2.0 * a);

        if (complex) { // complex roots
                printf("roots are %lf ± %lfi\n", term1, term2);
        } else if (D == 0.0) { // equal roots
                printf("two equals roots: %lf\n", term1);
        } else { // real roots
                printf("roots are %lf ± %lf\n", term1, term2);
        }
        return 0;
}