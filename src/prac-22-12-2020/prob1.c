#include <stdio.h>

int main() {
	unsigned int x, y, z;
	printf("Enter the sides (seperated with spaces): ");
	scanf("%u %u %u", &x, &y, &z);

	if(x == y && y == z) {
		printf("Equilateral Triangle\n");
	} else if (y == x || z == x || z == y) {
		printf("Isoseles Triangle\n");
	} else {
		printf("Scalene Triangle\n");
	}

	int xsq = x*x;
	int ysq = y*y;
	int zsq = z*z;
	if(xsq + ysq == zsq || ysq + zsq == xsq || zsq + xsq == ysq) {
		printf("Right angle triangle\n");
	}
	return 0;
}