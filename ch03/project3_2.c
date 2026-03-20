#include <stdio.h>

int main(void)
{
	int itemNum, month, day, year;
	float unitPrice;

	printf("Enter item number: ");
	scanf("%d", &itemNum);

	printf("Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("\n");

	printf("Item\t Unit\t Purchase\n");
	printf("\t Price\t Date\n");

	printf("%-d\t $%7.2f %-d/%-d/%-d\n", itemNum, unitPrice, month, day, year);
}
