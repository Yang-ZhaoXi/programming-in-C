#include <stdio.h>

int main (void)
{
  int n, triNum;
  n = 1;
  triNum = 0;

  while (n <= 200) {
    triNum += n;
    n += 1;
  }

  printf ("The 200th triangular number is %i\n", triNum);

  return 0;
}
