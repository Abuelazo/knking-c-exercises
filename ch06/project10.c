#include <stdio.h>

int main(void) {

  int month, day, year;

  printf("Enter a date (mm/dd/yy) : ");
  scanf("%d/%d/%d", &month, &day, &year);

  if (month == 0 && day == 0 && year == 0) {
    return 0; // Exit immediately if no dates are provided
  }

  int earlyMonth = month, earlyDay = day, earlyYear = year;


  for (;;) {
    printf("Enter a date (mm/dd/yy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    if (month == 0 && day == 0 && year == 0) {
      printf("%d/%d/%02d is the earliest date", earlyMonth, earlyDay, earlyYear);
      return 0;
    }

    int dateValue = (year * 10000) + (month * 100) + day;
    int earlyDateValue = (earlyYear * 10000) + (earlyMonth * 100) + earlyDay;

    if (dateValue < earlyDateValue) {
      earlyYear = year;
      earlyMonth = month;
      earlyDay = day;
    }

  }

  return 0;

}

