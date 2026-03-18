#include <stdio.h>

int main(void)
{
	int amount;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	int remaining = amount;

	int bill20 = amount / 20;
	remaining = amount - bill20 * 20;
	int bill10 = remaining / 10;
	remaining = remaining - bill10 * 10;
	int bill5 = remaining / 5 ;
	remaining = remaining - bill5 * 5;
	int bill1 = remaining;


	printf("$20 bills: %d\n", bill20);
	printf("$10 bills: %d\n", bill10);
	printf(" $5 bills: %d\n", bill5);
	printf(" $1 bills: %d\n", bill1);

	return 0;
}
