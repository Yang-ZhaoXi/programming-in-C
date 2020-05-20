#include <stdio.h>

int main (void)
{
  int u, v, temp;

  printf ("Please type in two nonnegativate integers.\n");
  scanf ("%i%i", &u, &v);

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  printf ("Their gratest common divsior is %i\n", u);

  return 0;
}
