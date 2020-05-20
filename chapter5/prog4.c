#include <stdio.h>

// int main (void)
// {
//   int n, number, triNum, counter;
//
//   for (counter = 1; counter <= 5; counter++) {
//     printf ("What triangular number do you want? ");
//     scanf ("%i", &number);
//
//     triNum = 0;
//
//     for (n = 1; n <= number; n++){
//       triNum += n;
//     }
//     printf ("Triangular number %i is %i\n\n", number, triNum);
//   }
//
//   return 0;
// }

int main (void)
{
  int loop, n, number, triNum, counter;
  printf ("What loop number do you want? ");
  scanf ("%i", &loop);

  for (counter = 1; counter <= loop; counter++) {
    printf ("What triangular number do you want? ");
    scanf ("%i", &number);

    triNum = 0;

    for (n = 1; n <= number; n++){
      triNum += n;
    }
    printf ("Triangular number %i is %i\n\n", number, triNum);
  }

  return 0;
}
