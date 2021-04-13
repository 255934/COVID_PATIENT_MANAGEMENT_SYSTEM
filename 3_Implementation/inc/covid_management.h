/**
 * @file covid_management.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 *  For management if covid patients
 */
#ifndef __HOSPITAL__
#define __HOSPITAL__

extern char ans; 
extern int ok;
extern int b, valid;

//FUNCTION DECLERATION
void WelcomeScreen(void);//WelcomeScreen function decleration
void Title(void);//Title function decleration
int MainMenu(int read);//MainMenu function decleration
void LoginScreen(void);//LoginScreen function decleration
int Add_rec(int read);//Add_rec function declaration
int func_list(int temp);//function to list the patient details 
int Search_rec(int read,char temp[]);//Search_rec function declaration
int Edit_rec(int read,char temp[]);//Edit_rec function declaration
int Dlt_rec(int read,char temp[]);//Dlt_rec function declaration
int ex_it(int temp);//exit function declaration
int vac_add(int read);
int vac_edit(int read,char temp[]);
int vac_view(int read,char temp[]);
short gotoxy(short x, short y);//Defines gotoxy() for ANSI C compilers.
//sets co-ordinates in (x,y).
struct patient//list of global variable
{
	int age;
	char Gender;
	char First_Name[20];
	char Last_Name[20]; 
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Doctor[20];
	char Problem[20];
};

struct patient  p,temp_c;


#endif  /* #define __HOSPITAL__ */