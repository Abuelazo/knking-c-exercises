#include <stdio.h>

int main(void)
{
	int threeDigit;

	printf("Enter a three-digit number: ");
	scanf("%d", &threeDigit);

	printf("The reversal is: %d%d%d\n", threeDigit%10, (threeDigit / 10) % 10, threeDigit/100);

	return 0;
}
