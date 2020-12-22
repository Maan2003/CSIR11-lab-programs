#include <stdio.h>
#include <math.h>

int main() {
	int limit = 300;
	int i, j;
	int is_first = 0;
	for(i = 2; i <= limit; ++i) {
		int is_prime = 1;
		for(j = 2; j <= sqrt(i); ++j) {
			if(i % j == 0) {
				is_prime = 0;
				break;
			}
		}
		if (is_prime == 1) {
			if (is_first == 0) {
				is_first = 1; 
			} else {
				printf("\t");
			}
			printf("%d", i);
		}
	}
	return 0;
}