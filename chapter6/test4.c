#include <stdio.h>
int main (void)
{
  float num, memory;
  char op;
  _Bool state = 1;

  printf ("Begin Calculations.\n");
  printf ("Please enter your number and operator.\n");
  while (state == 1) {
    scanf ("%f %c", &num, &op);

    if (op == 'S'){
      memory = num;
      printf ("= %f\n", memory);
    }
    else if (op == '+') {
      memory = memory + num;
      printf ("= %f\n", memory);
    }
    else if (op == '-') {
      memory = memory - num;
      printf ("= %f\n", memory);
    }
    else if (op == '*') {
      memory = memory * num;
      printf ("= %f\n", memory);
    }
    else if (op == '/') {
      if (num == 0) {
        printf ("zero can not be divided.\n");
      }
      else{
        memory = memory / num;
        printf ("= %f\n", memory);
      }
    }
    else if (op == 'E') {
      printf ("= %f\n", memory);
      printf ("End of Calculations.\n");
      state = 0;
    }
    else{
      printf ("Other operator.\n");
    }
  }

  return 0;
}
