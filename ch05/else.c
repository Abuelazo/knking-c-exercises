#include <stdio.h>
int main(void) {
  // The statement that follows the world else is executed if the expression in
  // parentheses has the value 0.

  int i = 3, j = 6, k = 9, max;
  if (i > j)
    max = i;
  else
    max = j;

  // It is not unusual for if statements to be nested inside other if
  // statements.

  // This if statement finds the largest of the numbers stored in i, j, and k
  // and stores that value in max:

  if (i > j)
    if (i > k)
      max = i;
    else
      max = k;
  else if (j > k)
    max = j;
  else
    max = k;

  printf("Max: %d\n", max);

  // Adding braces to statements even when they are not necessary has two
  // advantages.
  // First, programs become easier to modify, because more statements can easily be added to any if or else clause.
  // Second, it helps avoid errors that can result from forgetting to use braces when adding statements to an if or else clause.

  if (i > j) {
    if (i > k) {
      max = i;
    } else {
      max = k;
    }
  } else {
    if (j > k) {
      max = j;
    } else {
      max = k;
    }
  }

  printf("Max: %d\n", max);
  return 0;
}
