#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand((unsigned int)time(NULL));
  int die1,die2,total;
  printf("Rolling the dice...\n");

  die1=rand()%6+1;
  die2=rand()%6+1;
  printf("Die 1: %d\n",die1);

    printf("Die 2: %d\n",die2);
    total=die1+die2;
    printf("Total value: %d\n",total);
    if(total>7)printf("You won!\n");
    else printf("You lose\n");
    return 0;


}
