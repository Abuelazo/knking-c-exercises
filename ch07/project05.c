#include <ctype.h>
#include <stdio.h>

int main(void) {
  int totalValue = 0;
  char currentLetter;

  printf("Enter a word: ");
  
  while ((currentLetter = getchar()) != '\n') {
    switch (toupper(currentLetter)) {
      case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': 
      case 'R': case 'S': case 'T': case 'U':
        totalValue++;
        break;

      case 'D': case 'G':
        totalValue = totalValue + 2;
        break;

      case 'B': case 'C': case 'M': case 'P':
        totalValue = totalValue + 3;
        break;

      case 'F': case 'H': case 'V': case 'W': case 'Y':
        totalValue = totalValue + 4;
        break;

      case 'K':
        totalValue = totalValue + 5;
        break;

      case 'J': case 'X':
        totalValue = totalValue + 8;
        break;

      case 'Q': case 'Z':
        totalValue = totalValue + 10;
        break;

      default:
        printf("Invalid character");
        break;
    }
  }
  printf("Scrabble value: %d", totalValue);

  return 0;
}
