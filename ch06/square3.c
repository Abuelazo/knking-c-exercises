// Prints a table of squares using an odd method

#include <stdio.h>

int main(void) {
	int i = 1, lineNum, odd = 3, square;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &lineNum);

	for (square = 1; i <= lineNum; odd += 2) {
		printf("%10d%10d\n", i, square);
		i++;
		square += odd;
	}

	return 0;

}
