#include <stdio.h>

int main (void)
{
  int n, triNum;

  printf ("Table of triangular numbers\n\n");
  printf (" n          sum from 1 to n\n");
  printf ("---         ---------------\n");

  n = 1;
  triNum = 0;

  while (n <= 10) {
    triNum += n;
    printf (" %2i           %i\n", n, triNum);
    n += 1;
  }

  return 0;
}
