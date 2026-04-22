#include <stdio.h>

int main(void) {
  int month, day, year;

  printf("Enter date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Dated this %d", day);

  switch (day) {
  case 1: case 11: case 21: case 31:
    printf("st "); break;
  case 2: case 12: case 22:
    printf("nd "); break;
  case 3: case 13: case 23:
    printf("rd "); break;
  
  default: printf("th day ");
  }

  switch (month) {
    case 1:
	    printf("of January");	break;
    case 2:
	    printf("of February"); break;
    case 3:
	    printf("of March"); break;
    case 4:
	    printf("of April"); break;
    case 5:
	    printf("of May"); break;
    case 6:
	    printf("of June"); break;
    case 7:
	    printf("of July"); break;
    case 8:
	    printf("of August"); break;
    case 9:
	    printf("of September"); break;
    case 10:
	    printf("of October"); break;
    case 11:
	    printf("of November"); break;
    case 12:
	    printf("of December"); break;
  }

  printf(", 20%.2d.", year);
}
