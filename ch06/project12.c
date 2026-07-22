#include <stdio.h>

int main(void) {
	float epsilon;

	printf("Enter the value of the epsilon: ");
	scanf("%f", &epsilon);

	float e_approx = 1.00f;
	float factorial = 1.00f;

	for (int i = 1; ; i++) {

		factorial *= i;

		float term = 1.00f / factorial;

		if (term < epsilon) {
			break;
		}

		e_approx += term;
	}

	printf("Approximation of e: %f\n", e_approx);

	return 0;
}
