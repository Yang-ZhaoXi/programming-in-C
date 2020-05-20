#include <stdio.h>
int main (void)
{
  int n, triNumber;
  triNumber = 0;

  for (n = 1; n <= 200; n = n + 1)
    triNumber = triNumber + n;

  printf ("The 200th triangular number is %i\n", triNumber);

  return 0;
}
