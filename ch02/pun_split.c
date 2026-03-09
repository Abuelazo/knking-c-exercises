#include <stdio.h>

int main(void)
{

	// The function call printf does not automatically advance to the next output line when it finishes. 
	// To make printf advance one line, \n must be included in the string to be printed.
	
	printf("To C, or not to C: ");
	printf("that is the question.\n");

	// The new-line character can appear more than once in a string literal.
	
	printf("\n");
	printf("Brevity is the soul of wit.\n --Shakespeare\n");
	return 0;

}
