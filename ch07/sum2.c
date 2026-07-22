#include <stdio.h>

int main(void) {
	long num, sum;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	scanf("%ld", &num);

	while (num != 0) {
		sum += num;
		scanf("%ld", &num);
	}

	printf("The sum is: %ld", sum);
	return 0;
}
