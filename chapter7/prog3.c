#include <stdio.h>

int main (void)
{
  int Fibonacii[15], i;

  Fibonacii[0] = 0;
  Fibonacii[1] = 1;

  for (i = 2; i < 15; i++) {
    Fibonacii[i] = Fibonacii[i-2] + Fibonacii[i-1];
  }
  for (i = 0; i < 15; i++){
    printf ("%i\n", Fibonacii[i]);
  }
  return 0;
}
