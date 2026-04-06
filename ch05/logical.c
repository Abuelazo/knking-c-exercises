
int main(void)
{
	// In C, logical operators are ! (logical negation), && (logical and) and || (logical or).
	// They produce either 0 or 1 as their result. Often the operands will have values 0 or 1, but this is not a requirement.
	// The logical operators treat any nonzero operand as a true value and any zero operand as a false value.
	int i = 2, j = 3;

	!i;  // 0 — i is nonzero, negation gives false
	!!i; // 1 — double negation normalizes to 0 or 1
	i != 0; // 1
	(i != 0) && (j == 3); // 1
	(i != 0) || (j == 12);  // 1 — j==12 never evaluated (short-circuit)
        0 && (j = 99);   // j stays 3 — right side never executes
}

