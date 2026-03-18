#include <stdio.h>

int main(void)
{
	float x;

	printf("Enter a value for x: ");
	scanf("%f", &x);

	//printf("Result: %.2f\n", 3*x5 + 2*x4 - 5*x3 - x2 + 7*x - 6);

	// Using Horner's Rule.
	printf("Result: %.2f\n", ((((3*x + 2)*x - 5)*x + 7)*x -6));

	return 0;
}
