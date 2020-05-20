#include <stdio.h>

float absoluteValue (float x)
{
  if (x < 0){
    x = -x;
  }

  return x;
}

float squareRoot (float x, float epsilon)
{
  float guess = 1.0;

  float absoluteValue (float x);

  if (x < 0) {
    printf("Negative argument to squareRoot.\n");
    return -1.0;
  }

  while (absoluteValue (guess * guess - x) >= epsilon) {
    guess = ( x / guess + guess) / 2.0;
    printf ("guess: %f\n", guess);
  }
  // while (absoluteValue (guess / x - 1) >= epsilon) {
  //   guess = ( x / guess + guess) / 2.0;
  //   printf ("guess: %f\n", guess);
  // }

  return guess;
}

int main (void)
{
  printf ("squareRoot (2.0, 0.00001) = %f\n\n", squareRoot (2.0, 0.00001));
  printf ("squareRoot (144.0, 0.00001) = %f\n\n", squareRoot (144.0, 0.00001));
  printf ("squareRoot (17.5, 0.00001) = %f\n\n", squareRoot (17.5, 0.00001));

  // printf ("\n");
  //
  // printf ("squareRoot (2.0, .0001) = %f\n", squareRoot (2.0, .0001));
  // printf ("squareRoot (144.0, .0001) = %f\n", squareRoot (144.0, .0001));
  // printf ("squareRoot (17.5, .0001) = %f\n", squareRoot (17.5, .0001));
  //
  // printf ("\n");
  //
  // printf ("squareRoot (2.0, .001) = %f\n", squareRoot (2.0, .001));
  // printf ("squareRoot (144.0, .001) = %f\n", squareRoot (144.0, .001));
  // printf ("squareRoot (17.5, .001) = %f\n", squareRoot (17.5, .001));
  //
  // printf ("\n");
  //
  // printf ("squareRoot (2.0, .01) = %f\n", squareRoot (2.0, .01));
  // printf ("squareRoot (144.0, .01) = %f\n", squareRoot (144.0, .01));
  // printf ("squareRoot (17.5, .01) = %f\n", squareRoot (17.5, .01));
  //
  // printf ("\n");
  //
  // printf ("squareRoot (2.0, .1) = %f\n", squareRoot (2.0, .1));
  // printf ("squareRoot (144.0, .1) = %f\n", squareRoot (144.0, .1));
  // printf ("squareRoot (17.5, .1) = %f\n", squareRoot (17.5, .1));

  return 0;
}
