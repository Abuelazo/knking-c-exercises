#include "stdio.h"

int main(void)
{
	int twoDigit;

	printf("Enter a two-digit number: ");
	scanf("%d", &twoDigit);

	printf("The reversal is: %d%d\n", twoDigit%10, twoDigit/10);
}
