#include <stdio.h>

int main(void) {
  
  int count = 0;
  printf("Enter a message: ");

  while (getchar() != '\n')
    count++;

  printf("Your message was %d character(s) long", count);

  return 0;
}
