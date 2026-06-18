#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4;
	int largest, smallest, largest1, largest2, smallest1, smallest2;

	printf("Enter four integers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	if (num1 > num2) {
		largest1 = num1;
		smallest1 = num2;
	}
	else {
		largest1 = num2;
		smallest1 = num1;
	}

	if (num3 > num4) {
		largest2 = num3;
		smallest2 = num4;
	}
	else {
		largest2 = num4;
		smallest2 = num3;
	}

	if (largest1 > largest2) {
		largest = largest1;
	}
	else {
		largest = largest2;
	}

	if (smallest1 > smallest2) {
		smallest = smallest2;
	}
	else {
		smallest = smallest1;
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d\n", smallest);

	return 0;
}
