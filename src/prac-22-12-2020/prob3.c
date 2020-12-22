#include <stdio.h>

int main() {
	printf("Enter the numbers, enter q to leave\n");
	int num, max, min, atleast_one = 0;
	while(1) {
		// means invalid number
		if (scanf("%d", &num) == 0) {
			break;
		}
		if (atleast_one == 0) {
			max = min = num;
			atleast_one = 1;
			continue;
		}
		if(num > max) {
			max = num;
		} else if(num < min) {
			min = num;
		}
	}
	if (atleast_one == 0) {
		printf("Enter at least one number to get range\n");
		return 1;
	} else {
		printf("The range is %d", max - min);
		return 0;
	}
}