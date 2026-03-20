#include <stdio.h>

int main(void)
{
	int gsiPrefix, groupIndentify, publishCode, itemNum, checkDigits;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsiPrefix, &groupIndentify, &publishCode, &itemNum, &checkDigits);

	printf("GSI prefix: %d\n", gsiPrefix);
	printf("Group indentifier %d\n", groupIndentify);
	printf("Publisher code: %d\n", publishCode);
	printf("Item number: %d\n", itemNum);
	printf("Check digit: %d\n", checkDigits);

	return 0;
}
