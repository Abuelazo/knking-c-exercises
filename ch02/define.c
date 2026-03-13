// Programs may rely on constants, whose meaning may not be clear.
// Using the feature macro definition (#define), we can name constants.
#define INCHES_PER_POUND 166

// The value of the macro can be an expression.
// If it contains operators; the expression should be enclosed in parentheses.
// #define RECIPROCAL_OF_PI (1.0f / 3.14159f)

int main(void)
{
	int height = 8, length = 12, width = 10, weight, volume;

	volume = height * length * width;

	// When a program is compiled, the preprocessor replaces each macro by the value it has.
	
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	// will become 
	// weight = (volume + 166 - 1) / 166;

	return 0;
}
