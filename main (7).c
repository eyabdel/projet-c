#include "main.h"
#include "fct2.h"

int main() {
  
  Titlegame(tetris);
  
  while(lvl !=1 &&  lvl !=2 && lvl !=3){  
    printf("Choose The Level Between 1 And 3 \n");
    scanf("%d",&lvl);
    flush();
  }
  while(go!=1){  
    printf("Enter 1 To Play\n");
    scanf("%d",&go);
    flush();
  }
  srand(time(NULL));
  startab(tab);
  lf = check(tab);
  while (lf != -1) 
  {
    t1=time(NULL);
    randompiece(tab);
    t2=time(NULL);
    lf = check(tab);
    display(tab);
    int time = t2-t1;
 
    printf("TIME: ");
   
    printf("%ds. \n\n",time);
 
    if(lvl==2){
      if ((time) >= 15){
        lf=-1;
      } 
    }
    if(lvl==3){
      if ((time) >= 10){
        lf=-1;
      }
    }
    
    if (lf == 1) {
      score = score + 40;
    } else if (lf == 2) {
      score = score + 100;
    } else if (lf == 3) {
      score = score + 300;
    } else if (lf >= 4) {
      score = score + 1200;
    }
  
    printf("Your score is : ");
    printf(" %d.\n\n", score);  
  
  }
  printf("\33[38;2;255;0;0m");
  printf("xxxxx    xxxxx    xx   xx   xxxxxx\n");
  printf("x        x   x    x  x  x   x\n");
  printf("x  xxx   xxxxx    x     x   xxx\n");
  printf("x   x    x   x    x     x   x\n");
  printf("xxxxx    x   x    x     x   xxxxxx\n\n");
  
  printf("xxxxx    x   x    xxxxxx   xxxxxx\n");
  printf("x   x    x   x    x        x    x\n");
  printf("x   x    x   x    xxx      xxxxx\n");
  printf("x   x     x x     x        x   x\n");
  printf("xxxxx      x      xxxxxx   x    x\n\n");
  printf("\33[38;2;255;0;255m");
  printf("Your final score is : ");
  printf("\33[38;2;26;255;200m");
  printf(" %d\n", score);
  return 0;
}

