#include <stdio.h>
#include <math.h>

int main() {
	{
	printf("=== circle ===\n");
	double r;
	printf("Enter radius: ");
	scanf("%lf", &r);
	double area = M_PI * r * r;
	double peri = 2.0 * M_PI * r;
	printf("Area of circle is: %lf\n", area);
	printf("Perimeter of circle is: %lf\n", peri);
	}

	{
	printf("=== triangle ===\n");
	double a;
	printf("Enter the length of first side: ");
	scanf("%lf", &a);
	double b;
	printf("Enter the length of second side: ");
	scanf("%lf", &b);
	double c;
	printf("Enter the length of third side: ");
	scanf("%lf", &c);
	double peri = a + b + c;
	double s = peri / 2.0;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("Area of triangle is: %lf\n", area);
	printf("Perimeter of triangle is: %lf\n", peri);
	}
	
	{
	printf("=== rectangle ===\n");
	double l;
	printf("Enter length: ");
	scanf("%lf", &l);
	double b;
	printf("Enter breadth: ");
	scanf("%lf", &b);
	double area = l * b;
	double peri = 2.0 * (l + b);
	printf("Area of rectangle is: %lf\n", area);
	printf("Perimeter of rectangle is: %lf\n", peri);
	}
	
	{
	printf("=== square ===\n");
	double side;
	printf("Enter side length of square: ");
	scanf("%lf", &side);
	double area = side * side;
	double peri = 4.0 * side;
	printf("Area of square is: %lf\n", area);
	printf("Perimeter of square is: %lf\n", peri);
	}
}
