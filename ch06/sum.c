#include <stdio.h>

int main(void) {
	int num, sum;

	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	scanf("%d", &num);

	while (num != 0) {
		sum += num;
		scanf("%d", &num);
	}

	printf("The sum is: %d", sum);
	return 0;
}
