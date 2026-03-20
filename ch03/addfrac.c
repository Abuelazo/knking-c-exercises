#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2;

	printf("Enter first fraction: ");

	// The space in the scanf function indicates that until it finds data it will skip all spaces/tabs/enters.	
	scanf("%d /%d", &num1, &denom1);

	printf("Enter second fraction: ");
	scanf("%d /%d", &num2, &denom2);

	int result_num = num1 * denom2 + num2 * denom1;
	int result_denom = denom1 * denom2;

	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}
