#include <stdio.h>
int main(void) {
  // The role of the break statement in switch statements is to break out from
  // it. If we do not put a break statement in each case control will jump and
  // excute the statements of all cases below the original case that fulfilled
  // the condition.

  // For instance if grade is 3.
  int grade = 3;

  // Will print GoodAveragePoorFailingIllegal grade
  switch (grade) {
  case 4:
    printf("Excellent");
  case 3:
    printf("Good");
  case 2:
    printf("Average");
  case 1:
    printf("Poor");
  case 0:
    printf("Failing");
  default:
    printf("Illegal grade");
  }

  // Deliberately falling through from one case into the next is rare, so it is
  // a good idea to point out any deliberate omission of break.
  int num_passing, total_grades;

  switch (grade) {
  case 4: case 3: case 2: case 1:
    num_passing++;
    // FALL THROUGH
  case 0: total_grades++;
    break;
  }
}
