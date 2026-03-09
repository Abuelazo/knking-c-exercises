// Directives are instructions for the preprocessor.
// The "#include" directive states that information about the C standard I/O library (<stdio.h>) must be included before compilation.
// This is necessary because C has no built-in "read" and "write" commands; this ability is provided by the standard library instead.
#include <stdio.h>

// Functions in C are a series of statements grouped together and given a name. 
// A function that computes a value uses the "return" statement to specify what value it sends back.

// The word "int" indicates that main returns an integer value.
// The word "void" indicates that the function takes no arguments.
int main(void)
{
    // The statement printf displays a string on the screen.
    // Asking a function to perform a task is known as calling the function.
    printf("To C or not to C: that is the question.\n");

    // The statement "return 0" has two consequences:
    // 1. It makes the main function terminate.
    // 2. It indicates that the program finished successfully (value of 0).
    return 0;
}
