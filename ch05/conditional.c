#include <stdio.h>

int main(void) {
  // C provides an operator that allows an expression to produce one of two
  // values depending on the value of a condition.
  int i = 1, j = 2, k;

  // The conditional expression expr1 ? expr2 : expr3 should be read "if expr1
  // then expr2 else expr3."

  k = i > j ? i : j;        // k is now 2
  k = (i >= 0 ? i : 0) + 2; // k is now 3

  // Conditional expressions tend to make programs shorter but harder to
  // understand, one is the return statement.

  // if (i > j)
  //   return i;
  // else
  //   return j;

  return i > j ? i : j;

  // Calls of printf can sometimes benefit from condition expressions.

  // if (i > j)
  //   printf("%d\n", i);
  // else
  //   printf("%d\n", i);

  printf("%d\n", i > j ? i : j);

  return 0;
}
