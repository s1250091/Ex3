#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand((unsigned int)time(NULL));
  int die1,die2;
  printf("Rolling the dice...\n");

  die1=rand()%6+1;
  die2=rand()%6+1;
  printf("Die 1: %d\n",die1);

    printf("Die 1: %d\n",die2);

    printf("Total value: %d\n",die1+die2);

    return 0;


}
