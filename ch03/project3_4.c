#include <stdio.h>

int main(void)
{
	int firstGroup, secondGroup, thirdGroup;

	printf("Enter phone number [ (xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &firstGroup, &secondGroup, &thirdGroup);

	printf("You entered %03d.%03d.%04d", firstGroup, secondGroup, thirdGroup);

	return 0;
}
