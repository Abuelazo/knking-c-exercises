#include <stdio.h>

#define TAX_RATE 0.05f

int main(void)
{
	float amount;

	printf("Enter an Amount: ");
	scanf("%f", &amount);

	printf("Amount with Tax Added: %.2f\n", amount + (amount * TAX_RATE) );

	return 0;
}
