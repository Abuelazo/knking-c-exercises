int main(void)
{
	// Compound assignment lets us shorten statements.
	int i, k, j;

	i += 2; // same as i = i + 2
	
	i *= 3 + 2; // same as i = i(3 + 2) NOT the same as i = i * 3 + 2

	// The compound assignment operators have the same properties as the = operator. In particular, they're right associative.
	
	i += j += k; // means i += (j += k)
}
