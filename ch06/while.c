#include <stdio.h>

int main(void) {

  int i = 1, n = 10;

  /* The while statement evaluates the controlling expression first before
   executing the loop body. If the value is nonzero (true), the loop body is
   executed and the expression is tested again.
  */

  while (i < n)
    i = i * 2;

  // We can use more than one statement using braces to create a single compound statement.

  while (i > 0) {
	  printf("T minus %d and counting\n", i);
	  i--;
  }

  return 0;
}
