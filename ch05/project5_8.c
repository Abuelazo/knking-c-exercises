#include <stdio.h>

int main(void) {
  int grade;

  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  if (grade < 0 || grade > 100) {
    printf("Invalid Grade");
    return 0;
  }
  else if (grade == 100) {
      printf("Letter grade: A");
      return 0;
  }

  int tenDigit = grade / 10;

  switch (tenDigit) {
  case 9:
    printf("Letter grade: A\n");
    break;
  case 8:
    printf("Letter grade: B\n");
    break;
  case 7:
    printf("Letter grade: C\n");
    break;
  case 6:
    printf("Letter grade: D\n");
    break;
  default:
    printf("Letter grade: F\n");
    break;
  }

  return 0;
}
