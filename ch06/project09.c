#include <stdio.h>

int main(void)
{
	float loanAmount, interestRate, monthlyPayment;
	int numPayment;

	printf("Enter amount of loan: ");
	scanf("%f", &loanAmount);

	printf("Enter interest rate: ");
	scanf("%f", &interestRate);

	printf("Enter monthly payment: ");
	scanf("%f", &monthlyPayment);

	printf("Enter number of payments: ");
	scanf("%d", &numPayment);

	printf("\n");

	float remaining = loanAmount;
	float monthlyRate =  (interestRate / 100) / 12;

	for (int i = 0; i != numPayment; i++) {
		remaining = remaining + (remaining * monthlyRate) - monthlyPayment;
		printf("Balance remaining after payment %d: $%.2f\n", i + 1, remaining);
	}

	return 0;
}
