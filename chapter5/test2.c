#include <stdio.h>

int main (void)
{
  printf ("num        square of num\n");
  for (int n = 1; n <= 10; n++){
    printf ("%2i            %i\n", n, n*n);
  }

  return 0;
}
