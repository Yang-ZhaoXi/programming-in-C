#include <stdio.h>

// int main (void)
// {
//   printf ("num        factorial\n");
//   for (int i = 1; i <= 10; i++) {
//     int result = 1;
//     for (int j = 1; j <= i; j++) {
//       result *= j;
//     }
//     printf ("%2i           %i\n", i, result);
//   }
//
//   return 0;
// }

int main (void)
{
  int result = 1;
  printf ("num        factorial\n");
  for (int i = 1; i <= 10; i++) {
    result *= i;
    printf ("%2i           %i\n", i, result);
  }

  return 0;
}
