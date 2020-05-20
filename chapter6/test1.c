#include <stdio.h>
int main (void)
{
  int a, b;
  printf("Please enter two integer a and b.\n");
  scanf ("%i %i", &a, &b);

  if (b % a == 0) {
    printf ("a 可以整除 b\n");
  }
  else{
    printf ("a 不可以整除 b\n");
  }

  return 0;
}
