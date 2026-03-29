#include <stdio.h>

int main(void)
{
	int firstDigit, secondDigit, thirdDigit;
	
	printf("Enter a three-digit number: ");
	scanf("%1d%1d%1d", &firstDigit, &secondDigit, &thirdDigit);

	printf("The reversal is: %d%d%d\n", thirdDigit, secondDigit, firstDigit);
	
	return 0;
}

