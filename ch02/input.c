#include <stdio.h>

int main(void)
{
	// To obtain input we use the scanf function.
	// The f in scanf, like the f in printf, stands for "formatted"; both of them require the use of a format string.
	// A format string is a structure for text and placeholders for I/O operations, telling the function call what type of data to expect and how to interpret or display it.
	
	// The "%d" string indicates to scanf to read input that represents an integer.
	// i is an int variable where scanf is going to store the input.
	// The & symbol seems to indicate the address of the variable i?
	int i;
	scanf("%d", &i); // reads an integer; stores into i

	// Reading a float value requires "%f" string instead of "%d".
	float x;
	scanf("%f", &x); // reads a float value; stores into x 
}
