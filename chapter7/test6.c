#include <stdio.h>

int main (void)
{
  int a, b, fib, fibNum;
  a = 0;
  b = 1;

  printf ("How many fib num do you want?\n");
  scanf ("%i", &fibNum);

  if (fibNum <= 0) {
    printf ("fibNum can not <= 0\n");
  }
  else if (fibNum == 1) {
    printf ("fibNum           fib\n");
    printf ("%4i              %i\n", 1, a);
  }
  else if (fibNum == 2) {
    printf ("fibNum           fib\n");
    printf ("%4i              %i\n", 1, a);
    printf ("%4i              %i\n", 2, b);
  }
  else {
    printf ("fibNum           fib\n");
    printf ("%4i              %i\n", 1, a);
    printf ("%4i              %i\n", 2, b);
    for (int i = 0; i < fibNum-2; i++) {
      fib = a + b;
      a = b;
      b = fib;
      printf ("%4i              %i\n", i+3, fib);
    }
  }

  return 0;
}
