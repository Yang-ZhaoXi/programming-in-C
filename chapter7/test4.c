#include <stdio.h>

int main (void)
{
  float floatNum, floatList[10], sum;

  printf ("Please enter the float num\n");
  for (int i = 0; i < 10; i++) {
    scanf ("%f", &floatNum);
    floatList[i] = floatNum;
  }

  for (int i = 0; i < 10; i++) {
    sum = sum + floatList[i];
  }

  printf ("Sum is %f", sum);
  printf ("The average of floatList is %f\n", sum / 10);

  return 0;
}
