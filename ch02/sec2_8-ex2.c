#include <stdio.h>

#define PI 3.14

int main(void)
{
	int radius = 10; 

	// v = (4/3)πr^3
	// 4.0f/3.0f used to avoid integer division
	printf("Volume of the sphere: %.2f\n",
	4.0f/3.0f * PI * radius * radius * radius);
}
