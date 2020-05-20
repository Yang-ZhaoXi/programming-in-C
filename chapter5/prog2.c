#include <stdio.h>
int main (void)
{
  int n, triNum;
  printf ("Table of triangular numbers\n\n");
  printf (" n   Sum from 1 to n\n");
  printf ("--   ---------------\n");

  triNum = 0;

  for (n = 1; n <= 10; ++n) {
    triNum += n;
    printf (" %2i         %i\n", n, triNum);
  }

  return 0;
}
