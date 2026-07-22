#include <stdio.h>

int main(void) {
	int n;

	printf("Enter the value of the integer n: ");
	scanf("%d", &n);

	float e = 1.00f;
	float factorial = 1.00f;

	for (int i = 1; i <= n; i++) {

		factorial *= i;

		e += 1.00f / factorial;
	}

	printf("Approximated value of e: %f", e);
}
