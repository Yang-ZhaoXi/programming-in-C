#include <stdio.h>

int main (void)
{
  int n, number, triNum, counter;

  counter = 1;
  while (counter <= 5){
    printf ("What triangular number do you want? ");
    scanf ("%i", &number);

    triNum = 0;
    n = 1;

    while (n <= number){
      triNum += n;
      n++;
    }
    printf ("Triangular number %i is %i\n\n", number, triNum);
    counter++;
  }

  return 0;
}
