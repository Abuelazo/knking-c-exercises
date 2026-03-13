#include <stdio.h>

int main(void)
{
	int height = 8, length = 12, width = 10, weight, volume;

	volume = height * length * width;

	weight = (volume + 165) / 166;

	printf("Please enter height: ");
	scanf("%d", &height);

	printf("Please enter length: ");
	scanf("%d", &length);

	printf("Please enter width: ");
	scanf("%d", &width);

	printf("\n");

	printf("Dimensions: %dx%dx%d\n", height, length, width);
	printf("Volume: %d\n", volume);
	printf("Dimensional Weight: %d\n", weight);
}

