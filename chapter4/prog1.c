#include <stdio.h>

int main (void)
{
  int integervar = 100;
  float floatingVar = 331.79;
  double doubleVar = 8.44e+11;
  char charVar = 'W';

  _Bool boolVar = 0;

  printf ("integervar = %i\n", integervar);
  printf ("floatingVar = %f\n", floatingVar);
  printf ("doubleVar = %e\n", doubleVar);
  printf ("doubleVar = %g\n", doubleVar);
  printf ("charVar = %c\n", charVar);

  printf ("boolVar = %i\n", boolVar);

  return 0;
}
