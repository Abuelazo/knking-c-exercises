// Directives are basically instructions for the preprocessor.
// The "#include" directive states that the information about C standard I/O library which is in "<stdio.h>" has to be included in the program before it compiles it.
// We need to do this because C has no built-in "read" and "write" commands. This ability is provided instead by functions in the standard library.
#include <stdio.h>

// Functions in C are a series of statements for the program that have been grouped together and given a name. 
// A function that computes a value uses the return statement to specify what value it "returns"

int main(void)
{
	printf("To C or not to C: that is the question.\n");
	return 0;
}
