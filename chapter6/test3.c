#include <stdio.h>
int main (void)
{
  int a, b;

  printf("Please enter two integer a b, and you can get result of a / b.\n");
  scanf ("%i %i", &a, &b);

  if (b == 0) {
    printf("The integer b should not be zero.\n");
  }
  else {
    printf("%i / %i = %.3f\n", a, b, (float) a / b);
  }

  return 0;
}
