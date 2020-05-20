#include <stdio.h>
int main (void)
{
  // int i = 365, j = 7;
  // int i = 12258, j = 23;
  int i = 996, j = 4;
  int Next_multiple = i + j - i % j;
  printf ("Next_multiple: %i\n", Next_multiple);

  return 0;
}
