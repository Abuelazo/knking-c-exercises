#include <ctype.h>
#include <stdio.h>
int main(void) {

  /*
   * A variable of type char can be assigned any single character.
   */

  char ch;

  // Character constants are enclosed in single quotes, not double quotes.
  ch = 'a';
  ch = 'A';
  ch = '0';
  ch = ' '; /* space */

  // We can use the C's toupper library function to convert lower case to upper case.
  
  ch = 'a';
  ch = toupper(ch);

  // We can use the scanf and printf functions to read and write characters.
  do {
  scanf("%c", &ch);
  printf("%c", ch);
  }while (ch != '\n');

  // But getchar and putchar functions are prefered.
  do {
  ch = getchar();
  putchar(ch);
  }while (ch != '\n');


}
