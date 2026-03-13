#include <stdio.h>

int main(void)
{
	int height, length , width , weight, volume;

	printf("Please enter height: ");
	scanf("%d", &height);

	printf("Please enter length: ");
	scanf("%d", &length);

	printf("Please enter width: ");
	scanf("%d", &width);

	// Calculate after getting input.
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("\n");

	printf("Dimensions: %dx%dx%d\n", height, length, width);
	printf("Volume: %d\n", volume);
	printf("Dimensional Weight: %d\n", weight);

	return 0;
}
