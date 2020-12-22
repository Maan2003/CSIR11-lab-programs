#include <stdio.h>

int main() {
	int num;
	for (num = 1; num <= 500; ++num) {
		int sum = 0;
		// don't mutate the num
		int new_num = num;
		while(new_num != 0) {
			int dig = new_num % 10;
			sum += dig * dig * dig;
			new_num /= 10;
		}

		if(sum == num) {
			printf("%d\n", num);
		}
	}
}