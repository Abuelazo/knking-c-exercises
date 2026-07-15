#include <stdio.h>

int main(void)
{
	int monthDays, startDay, position;
	
	printf("Enter number of days in month: ");
	scanf("%d", &monthDays);

	printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
	scanf("%d", &startDay);
	
	for (position = 0; position != startDay - 1; position++) {
		printf("    ");
	}

	for (int i = 1; i <= monthDays; i++, position++) {
		if (position == 7) {
			printf("\n");
			position = 0; 
		}

		printf("%4d", i);
	}

	return 0;
}
