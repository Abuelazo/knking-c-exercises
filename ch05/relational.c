int main(void)

	// Many statements in C, including if statement, must test the value of an expression to see if it is true or false.
	// An expression such as i < j would have a special boolean or logical type in other programming languages. Such a type would have only two values, false and true.
	// In C, however that comparison yields an integer: either 0 (false) or 1 (true).
{
	// C's relational operators are <,>,<= and >= operators, they produce 0 (false) or 1 (true) when used in expressions.
	
	 10 < 11; // is 1
	 11 < 10; // is 0
	
	 // Relational operators are left associative so the expression.
	 int i, j, k;
	 i < j < k; // means (i < j) < k
	
	 // This expression first test if i is less than j; the 1 or 0 produced by this comparison is then compared to the value of k.
	
	 // The correct form of this expression is i < j && j < k.
}
