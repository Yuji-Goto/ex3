#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand((unsigned int)time(NULL));
  int h_cnt=0;
  int t_cnt=0;
  char name[100];
  printf("Who are you?\n>");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  printf("Tossing a coin...\n");

  for(int i=0;i<3;i++){
    printf("Round %d: ",i+1);
    if(rand()%2==0){
      printf("Heads\n");
      h_cnt++;
    }
    else{
      printf("Tails\n");
      t_cnt++;
    }
  }
  printf("Heads: %d, Tails: %d\n",h_cnt,t_cnt);
  return 0;
}
