#include <stdio.h>

int main (void)
{
  int n, two_to_the_n;

  printf ("Table of powers of two\n");
  printf ("-----------------\n");
  printf (" n   2 to the n\n");
  two_to_the_n = 1;

  for (n = 0; n <= 10; n++){
    printf ("%2i    %i\n", n, two_to_the_n);
    two_to_the_n *= 2;
  }

  return 0;
}
