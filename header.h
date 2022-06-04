#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*askcolomn(max):This function asks the user to choose a column between 1 and the maximum column (input as parameter) where the piece can be placed. And this, as long as the user enters a number lower than 1 or higher than maximum. The variable "a" takes the value of the chosen column and is decremented to have a grid numbered from 1 to 10.*/
int askcolumn(int max);

/*This function empties the buffer*/
void flush();


/*Sd(tab): This function creates a S-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '1' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Sd(char tab[100][100]);

/*S(tab): This function creates a S-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '1' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/

void S(char tab[100][100]);

/*Zd(tab): This function creates a Z-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '2' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Zd(char tab[100][100]);

/*Z(tab): This function creates a S-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '2' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/

void Z(char tab[100][100]);

/*Td3(tab): This function creates a T-shaped piece turned 90 degrees to the left. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '3' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Td3(char tab[100][100]);

/*Td2(tab): This function creates a T-shaped piece turned 180 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter. For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '3' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/

void Td2(char tab[100][100]);

/*Td1(tab): This function creates a T-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '3' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Td1(char tab[100][100]);

/*T(tab): This function creates a T-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '3' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void T(char tab[100][100]);

/*Jd3(tab): This function creates a J-shaped piece turned 90 degrees to the left. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '4' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Jd3(char tab[100][100]);

/*Jd2(tab): This function creates a J-shaped piece turned 180 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '4' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Jd2(char tab[100][100]);

/*Jd1(tab): This function creates a J-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '4' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/

void Jd1(char tab[100][100]);

/*J(tab): This function creates a J-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '4' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void J(char tab[100][100]);

/*Ld3(tab): This function creates a L-shaped piece turned 90 degrees to the left. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '5' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Ld3(char tab[100][100]);

/*Ld2(tab): This function creates a L-shaped piece turned 180 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '5' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Ld2(char tab[100][100]);

/*Ld1(tab): This function creates a L-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '5' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void Ld1(char tab[100][100]);

/*L(tab): This function creates a L-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '5' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void L(char tab[100][100]);

/*SQUARE(tab): This function creates a square-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '6' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void SQUARE(char tab[100][100]);

/*IH(tab): This function creates a I-shaped piece turned 90 degrees to the right. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '7' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void IH(char tab[100][100]);

/*IV(tab): This function creates a I-shaped piece. It calls the function askcolumn with the maximum column where the piece can be placed in parameter.  For each line from 1 to 13, this function checks if the support cells are empty or filled.If they are empty, the piece lands on this empty cell. If it's filled, each piece part lands on the previous line. The character '7' affected allows us to distinguish the different pieces to facilitate the use of other functions.*/
void IV(char tab[100][100]);

/*startab(tab): This function displays the empty grid a the start of the game.This is a grid of 14 lines and columns numbered from 1 to 10. The first 4 lines correspond to the overflow zone and are not visible.*/
void startab(char tab[100][100]);

/*color(tab,l,c): This function retrieve the characters of each piece from 1 to 7 and assign each piece a color by transforming these characters into 'o'. 
S:'1'-> red
Z:'2'-> green
T:'3'-> purple
J:'4'-> blue
L:'5'-> orange
Square:'6'-> yellow
I:'7'-> cyan*/
void color(char tab[100][100],int l,int c);
/*display(tab): This function displays a grid of 14 lines and 10 columns with the 4 first lines not visible.*/
void display(char tab[100][100]);

// aleaforme
void randompiece(char tab[100][100]);

// verification des lignes
int check(char tab[100][100]);


/*Titlegame(tetris): This function displays the title of the game 'TETRIS BY ABDEL AND EYA' in yellow in a grid.  */
void Titlegame(char tetris[100][100]);
