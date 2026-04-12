#include <stdio.h>
int main(void)
{
	// We often need to compare an expression against a series of values to see which one currently matches. We can use a cascaded if statement.
	// As an alternative, C provides the switch statement.
	int grade = 4;
	
	switch (grade) {
	case 4: printf("Excellent");
		break;
	case 3: printf("Good");
		break;
	case 2: printf("Average");
		break;
	case 1: printf("Poor");
		break;
	default: printf("Illegal grade");
		 break;
	}

	// To save space, sometimes we put several case labels on the same line.

	switch (grade) {
		case 4: case 3: case 2 : case 1:
			printf("Passing");
			break;
		case 0: printf("Failing");
			break;
		default: printf("Illegal grade");
			 break;
	}
	
	// There is no way to write a case label that specifies a range of values, as there is in some programming languages. 
	// Switch statements do not require to have a default case. If there is no default case and no matching case, control passes to the next statement after the switch.
	return 0;
}
