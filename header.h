#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//game
int askcolumn(int max);
void flush();
void randompiece(char tab[100][100]);
int check(char tab[100][100]);


//pieces construction
void Sd(char tab[100][100]);
void S(char tab[100][100]);
void Zd(char tab[100][100]);
void Z(char tab[100][100]);
void Td3(char tab[100][100]);
void Td2(char tab[100][100]);
void Td1(char tab[100][100]);
void T(char tab[100][100]);
void Jd3(char tab[100][100]);
void Jd2(char tab[100][100]);
void Jd1(char tab[100][100]);
void J(char tab[100][100]);
void Ld3(char tab[100][100]);
void Ld2(char tab[100][100]);
void Ld1(char tab[100][100]);
void L(char tab[100][100]);
void SQUARE(char tab[100][100]);
void IH(char tab[100][100]);
void IV(char tab[100][100]);

// display
void startab(char tab[100][100]);
void color(char tab[100][100],int l,int c);
void display(char tab[100][100]);
void Titlegame(char tetris[100][100]);
