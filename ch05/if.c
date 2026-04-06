#include <stdio.h>
#define MAX_LINES 10

int main(void)
{
	// If statements allow programs to choose between two alternatives by testing the value of an expression.
	// When an if statement is executed, the expression in the parentheses is evaluated; if the value of the expression is nonzero--which C interprets as true--the statement after the parentheses is executed.
	
	int line_num = 10, n = 3, i = 2;
	// The statement line_num = 0; is executed if the condition line_num == MAX_LINES is true (nonzero value).
	if (line_num == MAX_LINES) 
	  line_num = 0;

	printf("Line num is: %d", line_num);

	// Often the expression in an if statement test whether a variable falls within a range of values.
	
	// To test whether 0 <= i < n
	if (0 <= i && i < n);

	// To test wether i is outside the range
	if (i < 0 || i >= n);

	return 0;
}
