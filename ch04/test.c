#include <stdio.h>

int main(void)
{
	int a = 20, b = 8, c = 5;

	// 1. Demonstrate a safe expression with multiple increment operators.
	
	printf("a is %d\n", a++ - b-- + c--);

	// 2. Demonstrate an unsafe expression (comment why it's undefined)
	a = 20, b = 8;
	printf("a is %d\n", a++ - ++a - b++); //since a is being modified twice = undefined
	
	// 3. Show what you'd write instead to make the unsafe one safe
	a = 20, b = 8;
	int temp1 = a++;
	int temp2 = ++a;
	int temp3 = b++;

	printf("a is %d\n", temp1 - temp2 - temp3);
}
