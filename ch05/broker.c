#include <stdio.h>

int main(void)
{
	float commission, tradeValue;
	printf("Enter value of trade: ");
	scanf("%f", &tradeValue);

	if (tradeValue < 2500.00f) {
		commission = 30.00f + 0.017f * tradeValue;
	}
	else if (tradeValue < 6250.00f) {
		commission = 56.00f + 0.0066f * tradeValue;
	}
	else if (tradeValue < 20000.00f) {
		commission = 76.00f + 0.0034f * tradeValue;
	}
	else if (tradeValue < 50000.00f) {
		commission = 100.00f + 0.0022f * tradeValue;
	}
	else if (tradeValue < 500000.00f) {
		commission = 155.00f + 0.0011f * tradeValue;
	}
	else {
		commission = 255.00f + 0.0009f * tradeValue;
	}

	if (commission < 39.00f) {
		commission = 39.00f;
	}

	printf("Commission: $%.2f", commission);

	return 0;
}
