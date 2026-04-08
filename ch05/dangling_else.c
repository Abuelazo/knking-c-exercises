#include <stdio.h>
int main(void) {
  // In C and else clause belongs to the nearest if statement that hasn't
  // already been paired with an else.
  int x = 4, y = 2, result;

  // To make the else clause part of the outer if statement, we can enclose the
  // inner if statement in braces.
  if (y != 0) {
    if (x != 0)
      result = x / y;
  } else
    printf("Error: y is equal to 0\n");

  return 0;
}
