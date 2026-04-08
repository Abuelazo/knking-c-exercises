#include <stdio.h>
int main(void) {
  // We will often need to test a series of conditions, stopping as soon as one
  // of them is true. A cascaded if statement is often the best way to write
  // such a series of tests.
  int n = 5;

  if (n < 0)
    printf("n is less than 0\n");
  else if (n == 0)
    printf("n is equal to 0\n");
  else
    printf("n is greater than 0\n");
}
