// Program to calculate area and perimeter of various shapes.

#include <stdio.h>
// this gives M_PI macro and sqrt
#include <math.h>

int main() {
        // use of {} scopes helps use to reuse variable names
        {
                printf("====CIRCLE====\n");
                double r;
                printf("Enter the radius: ");
                scanf("%lf", &r);

                double area = M_PI * r * r;
                double peri = 2.0 * M_PI * r;

                printf("\n");
                printf("Area      = %lf\n", area);
                printf("Perimeter = %lf\n", peri);
        }

        {
                printf("\n====TRIANGLE====\n");
                double a, b, c;

                printf("Enter length of first side: ");
                scanf("%lf", &a);
                printf("Enter length of second side: ");
                scanf("%lf", &b);
                printf("Enter length of third side: ");
                scanf("%lf", &c);

                double peri = a + b + c;
                double s = peri / 2.0;
                double area = sqrt(s * (s - a) * (s - b) * (s - c));

                printf("\n");
                printf("Area      = %lf\n", area);
                printf("Perimeter = %lf\n", peri);
        }

        {
                printf("\n====RECTANGLE====\n");
                double a, b;

                printf("Enter length: ");
                scanf("%lf", &a);
                printf("Enter breadth: ");
                scanf("%lf", &b);

                double area = a * b;
                double peri = 2.0 * (a + b);
                printf("\n");
                printf("Area      = %lf\n", area);
                printf("Perimeter = %lf\n", peri);
        }

        {
                printf("\n====SQUARE====\n");
                double a;

                printf("Enter side length: ");
                scanf("%lf", &a);

                double area = a * a;
                double peri = 4.0 * a;
                printf("\n");
                printf("Area      = %lf\n", area);
                printf("Perimeter = %lf\n", peri);
        }

        return 0;
}
