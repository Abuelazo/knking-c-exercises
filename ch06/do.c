#include <stdio.h>

int main(void) {
  // Do statements are very similar to while statements.
  // The difference is that the condition is evaluated after executing the statement.
  int i = 10;
  do {
   printf("T minus %d and counting\n", i);
   i--;
  } while (i > 0);

  return 0;
}
