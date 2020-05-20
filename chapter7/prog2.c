#include <stdio.h>
int main (void)
{
  int responseNum, ratingCounters[11], response;
  for (int i = 1; i <= 10; i++){
    ratingCounters[i] = 0;
  }

  printf ("How many response will you enter?\n");
  scanf ("%i", &responseNum);

  printf ("Enter your response\n");

  for (int i = 1; i <= responseNum; i++) {
    scanf ("%i", &response);
    if (response < 1 || response > 10){
      printf ("Bad response: %i\n", response);
    }
    else if (response == 999) {
      break;
    }
    else{
      ratingCounters[response]++;
    }
  }
  printf ("\n\nRating Number of Response\n");
  printf ("-----  --------------------\n");

  for (int i = 1; i <= 10; i++){
    printf ("%4i%14i\n", i, ratingCounters[i]);
  }

  return 0;
}
