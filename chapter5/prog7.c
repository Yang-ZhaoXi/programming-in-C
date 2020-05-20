#include <stdio.h>

int main (void)
{
  int number, right_dight;
  _Bool state = 0;

  printf ("Enter your integer.\n");
  scanf ("%i", &number);

  while (number != 0){
    if(number < 0) {
      state = 1;
      right_dight = -1 * (number % 10);
    }
    else{
      right_dight = number % 10;
    }
    printf("%i", right_dight);
    number = number / 10;
  }
  
  if(state == 1) {
    printf ("-");
  }
  printf("\n");

  return 0;
}
