#include <stdio.h>

int main(void)
{
	int index1, index2, index3, index4, index5, index6, index7, index8, index9, index10, index11, index12, index13, index14, index15, index16;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &index1, &index2, &index3, &index4, &index5, &index6, &index7, &index8, &index9, &index10, &index11, &index12, &index13, &index14, &index15, &index16);

	printf("\n");

	printf("%d %d %d %d\n", index1, index2, index3, index4);
	printf("%d %d %d %d\n", index5, index6, index7, index8);
	printf("%d %d %d %d\n", index9, index10, index11, index12);
	printf("%d %d %d %d\n", index13, index14, index15, index16);

	int row1 = index1 + index2 + index3 + index4,
	    row2 = index5 + index6 + index7 + index8,
	    row3 = index9 + index10 + index11 + index12,
	    row4 = index13 + index14 + index15 + index16;

	int column1 = index1 + index5 + index9 + index13,
	    column2 = index2 + index6 + index10 + index14,
	    column3 = index3 + index7 + index11 + index15,
	    column4 = index4 + index8 + index12 + index16;

	int diagonal1 = index1 + index6 + index11 + index16,
	    diagonal2 = index4 + index7 + index10 + index13;

	printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);
	printf("Column sums: %d %d %d %d\n", column1, column2, column3, column4);
	printf("Diagonal sums: %d %d\n", diagonal1, diagonal2);

	return 0;
}
