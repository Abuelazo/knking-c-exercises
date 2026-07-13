#include <stdio.h>

int main(void)
{
	int n, m, gcd;

	printf("Enter a fraction: ");
	scanf("%d/%d", &n, &m);

	int o = n, p = m;

	for (;;) {

		if (o == 0) {
			gcd = p;
			break;
		}	


		int remainder = p % o;

		p = o;
		o = remainder;
	}

	printf("In lowest terms: %d/%d\n", n / gcd, m / gcd);

	return 0;
}
