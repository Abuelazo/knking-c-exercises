#include <stdio.h>

int main(void) {
  // The for statement is ideal for loops that have a counting variable.

  /* When this for statement is executed, the variable i is initialized
   * to 10, then i is tested to see if it's greater than 0. Then the
   * message T minus 10 and counting is printed, THEN i is decremented.
   */
  for (int i = 10; i > 0; i--) {
    printf("T minus %d and counting\n", i);
  }

  // The for statement is best for loops that count up or down. 
  // They have the following forms.
  
// Counting up from 0 to n-1:
// for (i = 0; i < n; i++) .

// Counting up from 1 to n:
// for (i = 1; i <= n; i++) ..

// Counting down from n-1 to 0:
// for (i = n - 1; i >= 0; i--) ..

// Counting down from n to 1:
// for (i = n; i > 0; i--)

  // Using < or <= as the controlling expression is used for counting up loops.
  // Whereas counting down loops use > or >=.
  
 return 0;
}
