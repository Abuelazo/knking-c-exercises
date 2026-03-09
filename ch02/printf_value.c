#include <stdio.h>
int main(void)

{
	int height, lenght, width, volume;
	float profit;

	profit = 2150.68124341;
	height = 6;
	lenght = 12;

	// %d is a placeholder indicating the position for the value of height.
	// %d only works for int variables; for a float variable, %f is used instead.
	printf("Height: %d\n", height);
	printf("\n");

	// By default, %f displays a number with six digits after the decimal point.
	// To force %f to display p digits after the decimal point, we put .p between % and f.
	printf("Profit: $%.2f\n", profit);
	printf("\n");

	// There is no limit to the number of variables that can be printed in a single call of printf.
	printf("Height: %d Lenght: %d\n", height, lenght);

	return 0;
}
