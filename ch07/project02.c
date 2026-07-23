#include <stdio.h>

int main(void) {
	long lineNum;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%ld", &lineNum);
	getchar();

	for (long i = 1; i <= lineNum; i++) {

			printf("%10ld%10ld\n", i, i*i);

			if (i % 24 == 0) {
				printf("Press enter to continue... ");
				getchar();
			}
	}

	return 0;

}
