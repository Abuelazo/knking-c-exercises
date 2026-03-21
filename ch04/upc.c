#include <stdio.h>

int main(void)
{
	int digit1, digit2, digit3, digit4, digit5, digit6, digit7, digit8, digit9, digit10, digit11, digit12;

	printf("Enter the first (single digit): ");
	scanf("%1d", &digit1);

	printf("Enter first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &digit2, &digit3, &digit4, &digit5, &digit6);

	printf("Enter the second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &digit7, &digit8, &digit9, &digit10, &digit11);

	int firstSum = digit1 + digit3 + digit5 + digit7 + digit9 + digit11;
	int secondSum = digit2 + digit4 + digit6 + digit8 + digit10;
	int total = 3 * firstSum + secondSum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}
