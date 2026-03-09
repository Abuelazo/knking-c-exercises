int main(void)

{
	// Its important to first declare the variable types.
	int height, lenght, width, volume;
	float profit;

	// Variables can be given values by assignment.
	// The numbers in this assigned values are said to be constants.
	height = 8;
	lenght = 12;
	width = 10;

	// Appending the letter f (for float) to a constant that contains a decimal point is best if the number is assigned to a float variable.
	// Failing to include it may cause a warning from the compiler.
	profit = 2150.48f;

	// Variables with assigned values can be used to help compute the value of another variable.
	volume = height * lenght * width;

	return 0;
}
