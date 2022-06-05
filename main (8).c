
#include "header.h"


int main() {
  char NEWname[10];
  char name[10];
  int sco; 
  time_t t1,t2;
  int l, c, lf = 0, score = 0;
  char tab[100][100];
  char tetris[100][100];
  int go=0;
  int lvl=0;
  Titlegame(tetris);                  //display the title
  printf("Enter your name: \n");      // ask the user to enter its name
  scanf("%s",&NEWname);
  flush();
  
  while(lvl !=1 &&  lvl !=2 && lvl !=3){    //ask to choose the level as long as the user didn't enter 1,2 or 3
    printf("Choose The Level Between 1 And 3 \n");
    scanf("%d",&lvl);
    flush();
    }
  while(go!=1){          // allows to begin the game by typing 1
    printf("Enter 1 To Play\n");
    scanf("%d",&go);
    flush();
  }
  srand(time(NULL));
  startab(tab);      //display the empty grid to start the game
  lf = check(tab);   
  while (lf != -1)   //The "while" is used to run the game while check(tab) different from -1 because lf=-1 means a game over
  {
    t1=time(NULL);     // It fixed the time before the turn.
    randompiece(tab);  // It generate a piece randomly
    t2=time(NULL);    // It fixed the time at the end of the turn
    lf = check(tab);
    display(tab);
    int time = t2-t1;  // It calculate the duration of one round (placement of one piece)
 
    printf("TIME: %ds. \n\n",time); //display the duration of one round
 
    if(lvl==2){             // For the level 2, the user have only 15 seconds to play a piece
      if ((time) >= 15){
        lf=-1;
      } 
    }
    if(lvl==3){    // For the level 3, the user have only 10 seconds to play a piece
      if ((time) >= 10){
        lf=-1;
      }
    }
                                  //lf=removed line
    if (lf == 1) {                //1line=+40 points
      score = score + 40;
    } else if (lf == 2) {        //2line=+100 points
      score = score + 100;
    } else if (lf == 3) {        //3line=+300 points 
      score = score + 300;
    } else if (lf >= 4) {         //4line=+1200 points
      score = score + 1200;
    }
  
    printf("Score: %d \n\n",score);    //display the score after each piece placed
  
  }
  printf("\33[38;2;255;0;0m");       //display GAME OVER in red letters
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
  printf("\33[38;2;255;255;255m");
  printf("Final score: %d\n ",score);  // displays the final score
  
  if(lvl==1){       // For the level 1, we open a file record1, we read the name and the best score and we stock it in name and sco. We compare it with the new score. If the new score is higher, the previous score is replaced by the new one. The best record is displayed.
    FILE * fichier;
    if(fichier==NULL){
      exit(1);
    }
    fichier=fopen("projet-c-main/record1.txt","r");
    fscanf(fichier,"%s %d",name,&sco);
    fclose(fichier);
    if(sco<=score){
      fichier=fopen("projet-c-main/record1.txt","w");
      fprintf(fichier,"%s %d",NEWname,score); 
      fclose(fichier);
    }
    fichier=fopen("projet-c-main/record1.txt","r");
    fscanf(fichier,"%s %d",name,&sco);
    fclose(fichier);
    printf("High Score is %d by %s in level 1\n",sco,name);
  }
  if(lvl==2){       // For the level 2, we open a file record2, we read the name and the best score and we stock it in name and sco. We compare it with the new score. If the new score is higher, the previous score is replaced by the new one. The best record is displayed.
    FILE * fichier;
    if(fichier==NULL){
      exit(1);
    }
    fichier=fopen("projet-c-main/record2.txt","r");
    fscanf(fichier,"%s %d",name,&sco);
    fclose(fichier);
    if(sco<=score){
      fichier=fopen("projet-c-main/record2.txt","w");
      fprintf(fichier,"%s %d\n",NEWname,score); 
      fclose(fichier);
    }
    fichier=fopen("projet-c-main/record2.txt","r");
    fscanf(fichier,"%s %d",name,&sco);
    fclose(fichier);
    printf("High Score is %d by %s in level 2\n",sco,name);
    }
  if(lvl==3){          // For the level 3, we open a file record3, we read the name and the best score and we stock it in name and sco. We compare it with the new score. If the new score is higher, the previous score is replaced by the new one. The best record is displayed.
    FILE * fichier;
    if(fichier==NULL){
      exit(1);
    }
    fichier=fopen("projet-c-main/record3.txt","r");
    fscanf(fichier,"%s %d",name,&sco);
    fclose(fichier);
    if(sco<=score){
      fichier=fopen("projet-c-main/record3.txt","w");
      fprintf(fichier,"%s %d\n",NEWname,score); 
      fclose(fichier);
    }
    fichier=fopen("projet-c-main/record2.txt","r");
    fscanf(fichier,"%s %d",name,&sco);
    fclose(fichier);
    printf("High Score is %d by %s in level 3/n",sco,name);
    }
  return 0;
}

