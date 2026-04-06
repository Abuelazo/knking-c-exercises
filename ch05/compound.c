#define MAX_LINES 10
int main(void)
{
	// To control two or more statements in a single if statement we use the compound statement.
	// By putting braces around a group of statements, we can force the compiler to treat it as a single statement.
	
	int line_num = 10, page_num = 3;
	if (line_num == MAX_LINES) {
		line_num = 0;
		page_num++;
	}

	// Compound statements are also common in loops and other places where the syntax of C requires a single statement, but we want more than one.
}
