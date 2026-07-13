#include <stdio.h>

int main(void)
{
	int n, m, gcd;

	printf("Enter two integers: ");
	scanf("%d %d", &n, &m);

	if (n < 0 || m < 0) {
		printf("Not a valid integer.");
		return 0;
	}

	for (;;) {

		if (n == 0) {
			gcd = m;
			break;
		}

		int remainder = m % n;

		m = n;
		n = remainder;
	}

	printf("Greatest common divisor: %d\n", gcd);

	return 0;
}
