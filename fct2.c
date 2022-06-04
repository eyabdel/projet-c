#include "fct2.h"

/*askcolomn(max):This function asks the user to choose a column between 1 and the maximum column (input as parameter) where the piece can be placed. And this, as long as the user enters a number lower than 1 or higher than maximum. The variable "a" takes the value of the chosen column and is decremented to have a grid numbered from 1 to 10.*/
int askcolumn(int max){
int a;
  do {
    printf("Give a column number between 1 and %d:  ",max);
    scanf("%d", &a);
  } while (a < 1 || a > max);
  a--;
  return a;
  }

/*This function empties the buffer*/
void flush(){
int a,b;
  do{
    a=scanf("%c",&b);
  }while(a==1&&b!='\n');
}


/*Sd(tab): This function creates a S-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '1' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Sd(char tab[100][100]) {
  int a=askcolumn(9);
  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i + 1][a + 1] != 32) {
      tab[i - 1][a] = '1';
      tab[i - 1][a + 1] = '1';
      tab[i][a + 1] = '1';
      tab[i - 2][a] = '1';
      break;
    }
    if (i == 13) {
      tab[13][a + 1] = '1';
      tab[12][a] = '1';
      tab[11][a] = '1';
      tab[12][a + 1] = '1';
    }
  }
}

/*S(tab): This function creates a S-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '1' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/

void S(char tab[100][100]) {
  int a=askcolumn(8);
  for (int i = 3; i <= 13; i++) {
    if (tab[i - 1][a + 2] != 32 || tab[i][a + 1] != 32 || tab[i][a] != 32){
      tab[i - 1][a + 1] = '1';
      tab[i - 2][a + 1] = '1';
      tab[i - 2][a + 2] = '1';
      tab[i - 1][a] = '1';
      break;
    }
    if (i == 13) {
      tab[13][a + 1] = '1';
      tab[13][a] = '1';
      tab[12][a + 2] = '1';
      tab[12][a + 1] = '1';
    }
  }
}

/*Zd(tab): This function creates a Z-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '2' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Zd(char tab[100][100]) {
  int a=askcolumn(9);
  for (int i = a; i <= 13; i++) {
    if (tab[i][a + 1] != 32 || tab[i + 1][a] != 32) {
      tab[i - 1][a + 1] = '2';
      tab[i - 1][a] = '2';
      tab[i][a] = '2';
      tab[i - 2][a + 1] = '2';
      break;
    }
    if (i == 13) {
      tab[13][a] = '2';
      tab[12][a] = '2';
      tab[11][a + 1] = '2';
      tab[12][a + 1] = '2';
    }
  }
}

/*Z(tab): This function creates a S-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '2' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/

void Z(char tab[100][100]) {
  int a=askcolumn(8);
  for (int i = 3; i <= 13; i++) {
    if (tab[i - 1][a] != 32 || tab[i][a + 1] != 32 || tab[i][a + 2] != 32) {
      tab[i - 1][a + 1] = '2';
      tab[i - 2][a + 1] = '2';
      tab[i - 2][a] = '2';
      tab[i - 1][a + 2] = '2';
      break;
    }
    if (i == 13) {
      tab[13][a + 1] = '2';
      tab[13][a + 2] = '2';
      tab[12][a] = '2';
      tab[12][a + 1] = '2';
    }
  }
}

/*Td3(tab): This function creates a T-shaped piece turned 90 degrees to the left. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '3' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Td3(char tab[100][100]) {
  int a=askcolumn(9);
  for (int i = a; i <= 13; i++) {
    if (tab[i][a + 1] != 32 || tab[i + 1][a] != 32) {
      tab[i - 1][a + 1] = '3';
      tab[i - 1][a] = '3';
      tab[i][a] = '3';
      tab[i - 2][a] = '3';
      break;
    }
    if (i == 13) {
      tab[13][a] = '3';
      tab[12][a] = '3';
      tab[11][a] = '3';
      tab[12][a + 1] = '3';
    }
  }
}

/*Td2(tab): This function creates a T-shaped piece turned 180 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter. For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '3' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/

void Td2(char tab[100][100]) {
  int a=askcolumn(8);
 
  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i][a + 1] != 32 || tab[i][a + 2] != 32) {
      tab[i - 1][a] = '3';
      tab[i - 1][a + 1] = '3';
      tab[i - 1][a + 2] = '3';
      tab[i - 2][a + 1] = '3';
      break;
    }
    if (i == 13) {
      tab[13][a] = '3';
      tab[13][a + 1] = '3';
      tab[13][a + 2] = '3';
      tab[12][a + 1] = '3';
    }
  }
}

/*Td1(tab): This function creates a T-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '3' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Td1(char tab[100][100]) {
  int a=askcolumn(9);

  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i + 1][a + 1] != 32) {
      tab[i - 1][a] = '3';
      tab[i - 1][a + 1] = '3';
      tab[i][a + 1] = '3';
      tab[i - 2][a + 1] = '3';
      break;
    }
    if (i == 13) {
      tab[13][a + 1] = '3';
      tab[12][a + 1] = '3';
      tab[11][a + 1] = '3';
      tab[12][a] = '3';
    }
  }
}

/*T(tab): This function creates a T-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '3' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void T(char tab[100][100]) {
  int a=askcolumn(8);
 
  for (int i = 3; i <= 13; i++) {
    if (tab[i - 1][a] != 32 || tab[i][a + 1] != 32 || tab[i - 1][a + 2] != 32) {
      tab[i - 1][a + 1] = '3';
      tab[i - 2][a + 1] = '3';
      tab[i - 2][a] = '3';
      tab[i - 2][a + 2] = '3';
      break;
    }
    if (i == 13) {
      tab[13][a + 1] = '3';
      tab[12][a + 2] = '3';
      tab[12][a] = '3';
      tab[12][a + 1] = '3';
    }
  }
}

/*Jd3(tab): This function creates a J-shaped piece turned 90 degrees to the left. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '4' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Jd3(char tab[100][100]) {
  int a=askcolumn(8);
 
  for (int i = a; i <= 13; i++) {
    if (tab[i + 1][a + 2] != 32 || tab[i][a + 1] != 32 || tab[i][a] != 32) {
      tab[i][a + 2] = '4';
      tab[i - 1][a] = '4';
      tab[i - 1][a + 1] = '4';
      tab[i - 1][a + 2] = '4';
      break;
    }
    if (i == 13) {
      tab[13][a + 2] = '4';
      tab[12][a] = '4';
      tab[12][a + 1] = '4';
      tab[12][a + 2] = '4';
    }
  }
}

/*Jd2(tab): This function creates a J-shaped piece turned 180 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '4' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Jd2(char tab[100][100]) {
  int a=askcolumn(9);
 
  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32) {
      tab[i - 1][a] = '4';
      tab[i - 2][a] = '4';
      tab[i - 3][a] = '4';
      tab[i - 3][a + 1] = '4';
      break;
    }
    if (i == 13) {
      tab[13][a] = '4';
      tab[12][a] = '4';
      tab[11][a] = '4';
      tab[11][a + 1] = '4';
    }
  }
}

/*Jd1(tab): This function creates a J-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '4' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/

void Jd1(char tab[100][100]) {
  int a=askcolumn(8);
  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i][a + 1] != 32 || tab[i][a + 2] != 32) {
      tab[i - 1][a] = '4';
      tab[i - 1][a + 1] = '4';
      tab[i - 1][a + 2] = '4';
      tab[i - 2][a] = '4';
      break;
    }
    if (i == 13) {
      tab[13][a] = '4';
      tab[13][a + 1] = '4';
      tab[13][a + 2] = '4';
      tab[12][a] = '4';
    }
  }
}

/*J(tab): This function creates a J-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '4' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void J(char tab[100][100]) {
  int a=askcolumn(9);
  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i][a + 1] != 32) {
      tab[i - 1][a] = '4';
      tab[i - 1][a + 1] = '4';
      tab[i - 2][a + 1] = '4';
      tab[i - 3][a + 1] = '4';
      break;
    }
    if (i == 13) {
      tab[13][a + 1] = '4';
      tab[12][a + 1] = '4';
      tab[11][a + 1] = '4';
      tab[13][a] = '4';
    }
  }
}

/*Ld3(tab): This function creates a L-shaped piece turned 90 degrees to the left. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '5' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Ld3(char tab[100][100]) {
  int a=askcolumn(8);
 
  for (int i = a; i <= 13; i++) {
    if ( tab[i + 1][a] != 32 || tab[i + 1][a + 1] != 32 ||
        tab[i + 1][a + 2] != 32) {
      tab[i][a] = '5';
      tab[i - 1][a+2] = '5';
      tab[i][a + 1] = '5';
      tab[i][a + 2] = '5';
      break;
    }
    if (i == 13) {
      tab[12][a+2] = '5';
      tab[13][a] = '5';
      tab[13][a + 1] = '5';
      tab[13][a + 2] = '5';
    }
  }
}

/*Ld2(tab): This function creates a L-shaped piece turned 180 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '5' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Ld2(char tab[100][100]) {
  int a=askcolumn(9);

  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i + 2][a + 1] != 32) {
      tab[i - 1][a] = '5';
      tab[i - 1][a + 1] = '5';
      tab[i][a + 1] = '5';
      tab[i + 1][a + 1] = '5';
      break;
    }
    if (i == 13) {
      tab[13][a + 1] = '5';
      tab[12][a + 1] = '5';
      tab[11][a + 1] = '5';
      tab[11][a] = '5';
    }
  }
}

/*Ld1(tab): This function creates a L-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '5' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Ld1(char tab[100][100]) {
  int a=askcolumn(8);

  for (int i = a; i <= 13; i++) {
    if (tab[i + 1][a] != 32 || tab[i][a + 1] != 32 || tab[i][a + 2] != 32) {
      tab[i][a] = '5';
      tab[i - 1][a] = '5';
      tab[i - 1][a + 1] = '5';
      tab[i - 1][a + 2] = '5';
      break;
    }
    if (i == 13) {
      tab[13][a] = '5';
      tab[12][a] = '5';
      tab[12][a + 1] = '5';
      tab[12][a + 2] = '5';
    }
  }
}

/*L(tab): This function creates a L-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '5' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void L(char tab[100][100]) {
  int a=askcolumn(9);
 
  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i][a + 1] != 32) {
      tab[i - 1][a] = '5';
      tab[i - 2][a] = '5';
      tab[i - 3][a] = '5';
      tab[i - 1][a + 1] = '5';
      break;
    }
    if (i == 13) {
      tab[13][a] = '5';
      tab[12][a] = '5';
      tab[11][a] = '5';
      tab[13][a + 1] = '5';
    }
  }
}

/*SQUARE(tab): This function creates a square-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '6' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void SQUARE(char tab[100][100]) {
  int a=askcolumn(9);
  
  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i][a + 1] != 32) {
      tab[i - 1][a] = '6';
      tab[i - 1][a + 1] = '6';
      tab[i - 2][a] = '6';
      tab[i - 2][a + 1] = '6';
      break;
    }
    if (i == 13) {
      tab[13][a] = '6';
      tab[13][a + 1] = '6';
      tab[12][a] = '6';
      tab[12][a + 1] = '6';
    }
  }
}

/*IH(tab): This function creates a I-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '7' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void IH(char tab[100][100]) {
  int a=askcolumn(7);
  
  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32 || tab[i][a + 1] != 32 || tab[i][a + 2] != 32 ||
        tab[i][a + 3] != 32) {
      tab[i - 1][a] = '7';
      tab[i - 1][a + 1] = '7';
      tab[i - 1][a + 2] = '7';
      tab[i - 1][a + 3] = '7';
      break;
    }
    if (i == 13) {
      tab[13][a] = '7';
      tab[13][a + 1] = '7';
      tab[13][a + 2] = '7';
      tab[13][a + 3] = '7';
    }
  }
}

/*IV(tab): This function creates a I-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '7' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void IV(char tab[100][100]) {
  int a=askcolumn(10);

  for (int i = a; i <= 13; i++) {
    if (tab[i][a] != 32) {
      tab[i - 1][a] = '7';
      tab[i - 2][a] = '7';
      tab[i - 3][a] = '7';
      tab[i - 4][a] = '7';
      break;
    }
    if (i == 13) {
      tab[13][a] = '7';
      tab[12][a] = '7';
      tab[11][a] = '7';
      tab[10][a] = '7';
    }
  }
}

/*startab(tab): This function displays the empty grid a the start of the game.This is a grid of 14 lines and columns numbered from 1 to 10. The first 4 lines correspond to the overflow zone and are not visible.*/
void startab(char tab[100][100]) {
  for (int l = 0; l < 14; l++) 
  {
    for (int c = 0; c < 10; c++) 
    {
      tab[l][c] = ' ';
      if (l > 3) {
        printf("|%c", tab[l][c]);
      }
    }
    if (l > 3){
      printf("|\n");
    } else 
    {
      printf("\n");
    }
  }
  printf(" 1 2 3 4 5 6 7 8 9 10");
  printf("\n\n\n");
}

/*color(tab,l,c): This function retrieve the characters of each piece from 1 to 7 and assign each piece a color by transforming these characters into 'o'. 
S:'1'-> red
Z:'2'-> green
T:'3'-> purple
J:'4'-> blue
L:'5'-> orange
Square:'6'-> yellow
I:'7'-> cyan*/
void color(char tab[100][100],int l,int c)
{
  if(tab[l][c]=='1'){
    tab[l][c]='o';
    printf("\33[38;2;255;0;0m");
    printf("%c",tab[l][c]);
    printf("\33[38;2;255;255;255m");
    tab[l][c]='1';
  } 
  if(tab[l][c]==' '){
    printf("%c",tab[l][c]);
  }
  if(tab[l][c]=='2'){
    tab[l][c]='o';
    printf("\33[38;2;0;255;0m");
    printf("%c",tab[l][c]);
    printf("\33[38;2;255;255;255m");
    tab[l][c]='2';
  }
  if(tab[l][c]=='3'){
    tab[l][c]='o';
    printf("\33[38;2;255;0;255m");
    printf("%c",tab[l][c]);
    printf("\33[38;2;255;255;255m");
    tab[l][c]='3';
  }
  if(tab[l][c]=='4'){
    tab[l][c]='o';
    printf("\33[38;2;0;0;255m");
    printf("%c",tab[l][c]);
    printf("\33[38;2;255;255;255m");
    tab[l][c]='4';
  }
  if(tab[l][c]=='5'){
    tab[l][c]='o';
    printf("\33[38;2;255;131;0m");
    printf("%c",tab[l][c]);
    printf("\33[38;2;255;255;255m");
    tab[l][c]='5';
  }
  if(tab[l][c]=='6'){
    tab[l][c]='o';
    printf("\33[38;2;255;255;0m");
    printf("%c",tab[l][c]);
    printf("\33[38;2;255;255;255m");
    tab[l][c]='6';
  }
  if(tab[l][c]=='7'){
    tab[l][c]='o';
    printf("\33[38;2;0;255;255m");
    printf("%c",tab[l][c]);
    printf("\33[38;2;255;255;255m");
    tab[l][c]='7';
  }
}
/*display(tab): This function displays a grid of 14 lines and 10 columns with the 4 first lines not visible.*/
void display(char tab[100][100]) {
  for (int l = 0; l < 14; l++)
  {
    for (int c = 0; c < 10; c++)
    {
      if (l < 4) {
        if(tab[l][c]!=' '){
          printf(" ");
          color(tab,l,c);
        }
      }
      if (l > 3) {
        printf("\33[38;2;255;255;255m");
        printf("|");
        color(tab,l,c);
      }
    }
    if (l > 3) {
      printf("\33[38;2;255;255;255m");
      printf("|\n");
    } 
    else {
      printf("\n");
    }
  }
  printf(" 1 2 3 4 5 6 7 8 9 10");
  printf("\n\n\n");
}

// aleaforme
void randompiece(char tab[100][100]) {
  int n;
  int alea = rand() % 7;

  if (alea == 0) {
    printf("  1     2      3    4\n");
    printf("\33[38;2;255;0;255m");
    printf("o o o    o     o     o\n");
    printf("  o    o o   o o o   o o\n");
    printf("         o           o\n\n");
    printf("\33[38;2;255;255;255m");
    do {
      printf("Choose direction: ");
      scanf("%d", &n);
      flush();
      if (n == 1) {
        T(tab);
      }
      if (n == 2) {
        Td1(tab);
      }
      if (n == 3) {
        Td2(tab);
      }
      if (n == 4) {
        Td3(tab);
      }
    } while (n != 1 && n != 2 && n != 3 && n != 4);
  }
  if (alea == 1) {
    printf("\n1  2\n");
    printf("\33[38;2;0;255;255m");
    printf("o oooo\no\no\no\n"); 
    printf("\33[38;2;255;255;255m");
    do {
      printf("Choose direction: ");
      scanf("%d", &n);
      flush();
      if (n == 1) {
        IV(tab);
      } else if (n == 2) {
        IH(tab);
      }
    } while (n != 1 && n != 2);
  }
  if (alea == 2) {
    printf("\33[38;2;255;255;0m");
    printf("\noo\noo\n");
    printf("\33[38;2;255;255;255m");
    SQUARE(tab);
  }
  if (alea == 3) {
    printf(" 1      2\n");
    printf("\33[38;2;0;255;0m");
    printf("o o      o\n");
    printf("  o o  o o\n");
    printf("       o\n\n");
    printf("\33[38;2;255;255;255m");
    do {
      printf("Choose direction: ");
      scanf("%d", &n);
      flush();
      if (n == 1) {
        Z(tab);
      } else if (n == 2) {
        Zd(tab);
      }
    } while (n != 1 && n != 2);
  }
  if (alea == 4) {
    printf("  1      2\n");
    printf("\33[38;2;255;0;0m");
    printf("  o o   o\n");
    printf("o o     o o\n");
    printf("          o\n\n");
    printf("\33[38;2;255;255;255m");
    do {
      printf("Choose direction: ");
      scanf("%d", &n);
      flush();
      if (n == 1) {
        S(tab);
      } else if (n == 2) {
        Sd(tab);
      }
    } while (n != 1 && n != 2);
  }
  if (alea == 5) {
    printf(" 1      2      3      4\n");
    printf("\33[38;2;0;0;255m");
    printf("  o   o       o o   o o o\n");
    printf("  o   o o o   o         o\n");
    printf("o o           o\n\n");
    printf("\33[38;2;255;255;255m");
    do {
      printf("Choose direction: ");
      scanf("%d", &n);
      flush();
      if (n == 1) {
        J(tab);
      }
      if (n == 2) {
        Jd1(tab);
      }
      if (n == 3) {
        Jd2(tab);
      }
      if (n == 4) {
        Jd3(tab);
      }

    } while (n != 1 && n != 2 && n != 3 && n != 4);
    
  }
  if (alea == 6) {
    printf("1      2      3       4\n");
    printf("\33[38;2;255;131;0m");
    printf("o    o o o   o o        o\n");
    printf("o    o         o    o o o\n");
    printf("o o            o\n\n");
    printf("\33[38;2;255;255;255m");
    do {
      printf("Choose direction: ");
      scanf("%d", &n);
      flush();
      if (n == 1) {
        L(tab);
      }
      if (n == 2) {
        Ld1(tab);
      }
      if (n == 3) {
        Ld2(tab);
      }
      if (n == 4) {
        Ld3(tab);
      }
    } while (n != 1 && n != 2 && n != 3 && n != 4);
  }  
}

// verification des lignes
int check(char tab[100][100]) {
  int compt = 0;
  for (int l = 0; l <= 3; l++) 
  {
    for (int c = 0; c <= 9; c++) {
      if (tab[l][c] != 32) {
        return -1;
      }
    }

    for (int L = 4; L <= 13; L++)
    {
      for (int C = 0; C <= 9 && tab[L][C] != 32; C++)
      {
        if (C == 9) 
        {
          compt++;
          for (int li = L; li >= 4; li--)
          {
            for (int co = 0; co <= 9; co++) {
              tab[li][co] = tab[li - 1][co];
            }
          }
        }
      }
    }
  }
  return compt;
}


/*Titlegame(tetris): This function displays the title of the game 'TETRIS BY ABDEL AND EYA' in yellow in a grid.  */
void Titlegame(char tetris[100][100]){
  for (int l = 0; l < 11; l++) {
    for (int c = 0; c < 11; c++)
    {
      tetris[l][c]=' ';
    }
  }
  tetris[1][2]='T';
  tetris[1][3]='E';
  tetris[1][4]='T';
  tetris[1][5]='R';
  tetris[1][6]='I';
  tetris[1][7]='S';
  tetris[3][4]='B';
  tetris[3][5]='Y';
  tetris[5][1]='A';
  tetris[5][2]='B';
  tetris[5][3]='D';
  tetris[5][4]='E';
  tetris[5][5]='L';
  tetris[7][4]='A';
  tetris[7][5]='N';
  tetris[7][6]='D';
  tetris[9][6]='E';
  tetris[9][7]='Y';
  tetris[9][8]='A';
  for (int l = 0; l < 11; l++) 
  {
    for (int c = 0; c < 11; c++)
    {
      printf("|");
      printf("\33[38;2;255;255;0m");
      printf("%c", tetris[l][c]);
      printf("\33[38;2;255;255;255m");
    }
    printf("\n");
  }
printf("\n");
}
