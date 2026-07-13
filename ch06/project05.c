#include <stdio.h>

int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The reversal is: ");

	do {
	int i = num % 10;
	printf("%d", i);
	num /= 10;
	}while (num != 0);

	printf("\n");

	return 0;
}
