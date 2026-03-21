#include <stdio.h>

int main(void)
{
	int i = 3, j = 8, k = 2;

	printf("%d\n", i + j * k); //is equivalent to i + (j * k)
	printf("%d\n", -i * -j); //is equivalent to (-i) * (-j)
	printf("%d\n", +i + j / k); // is equivalent to (+ i) + (j / k)
				    
	printf("%d\n", i - j - k); // is equivalent to (i - j) - k 
	printf("%d\n", i * j / k); // is equivalent to (i * j) / k 
	
	return 0;
}
