#include <stdio.h>
/* 待完善 逆序或重写正序 */
int main (void)
{
  int num, right_dight;
  char num2str;
  printf ("Please enter a integer.\n");
  scanf ("%i", &num);
  if (num == 0) {
    printf ("zero");
  }
  while(num != 0) {
    right_dight = num % 10;

    if(right_dight == 1){
      printf ("one ");
    }
    else if(right_dight == 2){
      printf ("two ");
    }
    else if(right_dight == 3){
      printf ("three ");
    }
    else if(right_dight == 4){
      printf ("four ");
    }
    else if(right_dight == 5){
      printf ("five ");
    }
    else if(right_dight == 6){
      printf ("six ");
    }
    else if(right_dight == 7){
      printf ("seven ");
    }
    else if(right_dight == 8){
      printf ("eight ");
    }
    else if(right_dight == 9){
      printf ("nine ");
    }
    else if(right_dight == 0){
      printf ("zero ");
    }

    num = num / 10;
  }

  printf ("\n");

  return 0;
}
