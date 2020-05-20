#include <stdio.h>

int main (void)
{
  int range;
  printf ("Please give me a range number, I will help you find the prime number.\n");
  scanf ("%i", &range);

  printf ("the prime in range is the following:\n");
  int rangeList[range];

  for (int i = 1; i <= range; i++) {
    rangeList[i] = 0;
  }

  for (int i = 1; i <= range; i++) {
    if (i == 1) {
      rangeList[i-1] = 0;
    }
    else if (i % 2 == 0 && i != 2) {
      rangeList[i-1] = 0;
    }
    else if (i % 3 == 0 && i != 3) {
      rangeList[i-1] = 0;
    }
    else if (i % 5 == 0 && i != 5) {
      rangeList[i-1] = 0;
    }
    else if (i % 7 == 0 && i != 7) {
      rangeList[i-1] = 0;
    }
    else {
      rangeList[i-1] = i;
    }
  }
  for (int i = 1; i <= range; i++) {
    if (rangeList[i] != 0) {
      printf ("%i\n", rangeList[i]);
    }
  }

  return 0;

}
