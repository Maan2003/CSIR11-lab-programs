#include <stdio.h>
#define INCH_PER_CENTIMETER 0.393701

int main() {
        double a;
        printf("Enter length in centimeters:");
        scanf("%lf", &a);

        // NOTE: cast to int truncrates the double
        // TODO: handle overflow better
        int inches = (int)(a * INCH_PER_CENTIMETER);

        int feet = inches / 12;
        inches %= 12;
        printf("%d feet %d inches\n", feet, inches);
        return 0;
}