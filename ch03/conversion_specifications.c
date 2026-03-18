#include <stdio.h>

int main(void) {

  int x = 123;

  printf("%d\n", x);          // 123 (normal)
  printf("%5d\n", x);         // ••123 (right-aligned in 5 spaces)
  printf("%-5d\n", x);        // 123•• (left-aligned in 5 spaces)
  printf("%05d\n", x); // 00123 (pad with zeros)

  float pi = 3.14159;

  printf("%f\n", pi);     // 3.141590 (default 6 decimal places)
  printf("%.2f\n", pi);   // 3.14 (2 decimal places)
  printf("%8.2f\n", pi);  // ••••3.14 (8 total width, 2 decimals)
  printf("%-8.2f\n", pi); // 3.14•••• (left-aligned)
  printf("%8.2f\n", pi); // 3.14•••• (left-aligned)
}
