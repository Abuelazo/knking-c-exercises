#include <stdio.h>

int main(void)
{
	// Unary operator + does nothing.
	// It's used to emphasize that a numeric constant is positive.
	int i = +1; // + used as a unary operator.
	int j = -1; // - used as a unary operator.

	// C has many operators one of which is the module operator.
	// Modulo operator gives us the remainder of a division.
	// Both numbers have to be integers otherwise the program won't compile.
	printf("%d\n", 7 % 3);

	// With the exception of %, we can mix integer or floating-point operands.
	// When int and float operands are mixed, the result has type float.
	printf("%f\n", 12.4f + 5);

	// When both of the operands are integers, the / operator shortens the result by dropping the fractional part.
	printf("%d\n", 1 / 2); // this is equal to 0, not 0.5

	return 0;
}
