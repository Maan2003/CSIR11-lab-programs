#include <stdio.h>

int main() {
	double w, h;
	printf("Enter weight (in kg): ");
	scanf("%lf", &w);
	printf("Enter height (in m): ");
	scanf("%lf", &h);
	double bmi = w / (h * h);
	if(bmi < 15.0) {
		printf("Starvation\n");
	} else if (bmi < 17.5) {
		printf("Anorexic\n");
	} else if (bmi < 18.5) {
		printf("Underweight\n");
	} else if (bmi < 25.0) {
		printf("Ideal\n");
	} else if (bmi < 26.0) {
		printf("Overweight\n");
	} else if (bmi < 30.0) {
		printf("Not defined in question\n");
	} else if (bmi < 31.0) {
		printf("Obese\n");
	} else if (bmi < 40.0) {
		printf("Not defined in question\n");
	} else /* > 40 */ {
		printf("Morbidly Obese\n");
	}
	return 0;
}

