//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation

#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"

//Defines gotoxy() for ANSI C compilers.
short gotoxy(short x, short y) {
COORD pos = {x, y};//sets co-ordinates in (x,y).
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
return x+y;
}
