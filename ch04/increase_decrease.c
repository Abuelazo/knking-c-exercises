#include <stdio.h>

int main(void)
{
	// Incrementing and decrementing in C means adding 1 and substracting 1.
	// The compound assignment operators allow us to condense the statements.
	
	int i, j;

	i += 1;
	j -= 1;

	// But C allows increments and decrements to be even shorter.
	// The ++ and -- operators allows this.
	
	
	// They may seem simple at first: ++ adds 1 to its operand, whereas -- substracts 1.
	// Complexity appears when ++ and -- can be used as prefix operators (++1 and --1).
	// Or postfix operators (i++ and i--).
	
	// ++i is a prefix operator: it increments i and returns the new value.
	// The increment happens before the value is used in the expression.
	
	i = 1;
	printf("i is %d\n", ++i); // prints "i is 2"
	printf("i is %d\n", i); // prints "i is 2"
	
	// i++ is a postfix operator: it returns the old value of i, then increments i.
	// The increment is guaranteed to happen before the next statement (before the sequence point at the semicolon).
	
	i = 1;
	printf("i is %d\n", i++); // prints "i is 1"
	printf("i is %d\n", i); // prints "i is 2"
}
