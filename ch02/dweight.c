#include <stdio.h>

// Compute the dimensional weight of a 12 x 10 x 8 box

int main(void)
{
	int height, length, width, weight, volume;

	height = 8;
	length = 12;
	width = 10;

	volume = height * length * width;

	// Because the shipping company expect us to round up, one solution is to add 165 to the volume before dividing by 166.
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", height, length, width);
	printf("Volume: %d\n", volume);
	printf("Dimensional Weight: %d\n", weight);
}
