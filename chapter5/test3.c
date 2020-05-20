#include <stdio.h>

int main (void)
{
  int triNum;
  printf ("num        triNum\n");

  for (int n = 5; n <= 50; n = n + 5) {
    triNum = n * (n + 1) / 2;
    printf ("%2i          %i\n", n, triNum);
  }

  return 0;

}
