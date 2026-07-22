int main(void)
{
  /*
   * The leftmost bit of a signed integer known as the sign bit is 0
   * Integer types are divided into two categories: signed and unsigned.
   * if the number is positive or zero, 1 if it's negative.
  */

  /* 
   * Some programs may require longer number that cant be stored in the 4 bytes
   * of a normal integer. C provides long integers. 
   * At times we may need to conserve memory by storing the number in less space;
   * such number is called a short integer.
  */

  /*
   * We can make an integer type that exactly meets our needs.
   */

  short int;
  unsigned short int;
  
  int;
  unsigned int;

  long int;
  unsigned long int;

  /*
   * Since integers in C are treated as signed by default we can shorten
   * signed long int to long int. Also order doesn't matter.
   * unsigned short int = short unsigned int.
   */

  /*
   * C allows to short the names of integer types by dropping the word int.
   */

  short;
  unsigned short;
  
  long;
  unsigned long;

  return 0;
}
