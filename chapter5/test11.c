#include <stdio.h>

int main (void)
{
  int number, right_dight, result;
  printf ("What number do you want? ");
  scanf ("%i", &number);

  result = 0;
  while (number != 0){
    right_dight = number % 10;
    result += right_dight;
    number = number / 10;
  }

  printf ("The sum of all num in number is %i\n", result);

  return 0;
}
