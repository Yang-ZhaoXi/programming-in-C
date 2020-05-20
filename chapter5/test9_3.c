#include <stdio.h>

int main (void)
{
  int n, number, triNum;

  printf ("What triangular number do you want? ");
  scanf ("%i", &number);

  n = 1;
  triNum = 0;

  while (n <= number){
    triNum += n;
    n += 1;
  }
  
  printf ("Triangular number %i is %i\n", number, triNum);

  return 0;
}
