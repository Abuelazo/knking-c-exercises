#include <stdio.h>

int main(void) {
	int lineNum;
	int i = 1;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &lineNum);

	while (i <= lineNum) {
		printf("%10d%10d\n", i, i*i);
		i++;
	}

	return 0;
}
