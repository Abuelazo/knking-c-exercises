#include <stdio.h>

int main(void)
{
	// We can simplify a program and reduce the number of variables with a property of printf.
	// printf can display the value of any numberic expression.
	
	int height = 8, length = 12, width = 12, volume;

	// volume = height * length * width;
	// printf("%d\n", volume);

	printf("%d\n", height * length * width);

	return 0;
}
