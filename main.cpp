#include<iostream>
#include<conio.h>
#include<dos.h>
#include <windows.h>
#include <time.h> #define SCREEN_WIDTH 90 
#define SCREEN_HEIGHT 30
#define WIN_WIDTH 70
#define MENU_WIDTH 20
#define GAP_SIZE 7
#define Enemy_DIF 45

using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

int enemyY[3];
int enemyX[3];
int enemyFlag[3];
char asteroid[3][4] = {' ', '+', '+', ' ',
                        '|', '+', '+', '|',
                        '_', '_', '_', '_'}
int asteroidPos = WIN_WIDTH/2;
int score = 0;
int bullets[20][4];
int bulletsLife[20];
int bIndex = 0;

void gotoxy(int x, int y){
    CursorPosition.X = x;
    CursorPosition.Y = y;
    SetConsoleCursorPosition(console, CursorPosition);
}
void setcursor