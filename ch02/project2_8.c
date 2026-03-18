#include <stdio.h>

int main(void)
{
	float loanAmount, interestRate, monthlyPayment;

	printf("Enter amount of loan: ");
	scanf("%f", &loanAmount);

	printf("Enter annual interest rate: ");
	scanf("%f", &interestRate);

	printf("Enter monthlyPayment payment: ");
	scanf("%f", &monthlyPayment);

	printf("\n");

	float remaining = loanAmount;
	float monthlyRate =  (interestRate / 100) / 12;

	remaining = remaining + (remaining * monthlyRate) - monthlyPayment;

	float afterFirst = remaining;
	remaining = remaining + (remaining * monthlyRate) - monthlyPayment;
	float afterSecond = remaining;
	remaining = remaining + (remaining * monthlyRate) - monthlyPayment;
	float afterThird = remaining;

	printf("Balance remaining after first payment: %.2f\n", afterFirst);
	printf("Balance remaining after second payment: %.2f\n", afterSecond);
	printf("Balance remaining after third payment: %.2f\n", afterThird);

	return 0;
}
