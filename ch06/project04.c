#include <stdio.h>

int main(void)
{
	float tradeValue;

	for (;;) {

	 printf("Enter value of trade: ");
	 scanf("%f", &tradeValue);

	 float commission = 0.00f;

	 if (tradeValue == 0) {
	 	break;
	 }
	
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

	 printf("Commission: $%.2f\n", commission);

	}

	return 0;
}
