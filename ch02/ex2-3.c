#include <stdio.h>

// Compute the dimensional weight of a 12 x 10 x 8 box

int main(void)
{
	int height = 8, length = 12, width = 10, volume;

	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n", height, length, width);
	printf("Volume: %d\n", volume);
	printf("Dimensional Weight: %d\n", (volume + 165) / 166);
}

