#include <stdio.h>

int main(void) {
  int n, number, triNum;

  printf ("What triangular number do you what? ");
  scanf ("%i", &number);

  triNum = 0;

  for (n = 1; n <= number; n++) {
    triNum += n;
  }
  printf ("Triangular number %i is %i\n", number, triNum);

  return 0;
}
