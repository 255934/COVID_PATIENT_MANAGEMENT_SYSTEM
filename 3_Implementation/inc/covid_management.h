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

extern char anwer; 
extern int tt;
extern int bad, v;

//FUNCTION DECLERATION
void WelcomeScreen(void);//WelcomeScreen function decleration
void Title(void);//Title function decleration
int MainMenu(int read);//MainMenu function decleration
void LoginScreen(void);//LoginScreen function decleration
int Add(int read);//Add_rec function declaration
int func_list(int temp);//function to list the patient details 
int Search(int read,char temp[]);//Search_rec function declaration
int Edit(int read,char temp[]);//Edit_rec function declaration
int Deletes(int read,char temp[]);//Dlt_rec function declaration
int ex_it(int temp);//exit function declaration
int vac_add(int read);
int vac_edit(int read,char temp[]);
int vac_view(int read,char temp[]);

typedef struct patient
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
} patientt;

patientt  p,temp_c;
typedef struct vacinate
{int age;
	char Gender;
	char First_Name[20];
	char Last_Name[20]; 
	char Contact_no[15];
	char Address[30];
	char Email[30];
	char Date[20];
	char Center_name[20];
} vacinatte;
vacinatte p1,temp_c1;


#endif  /* #define __HOSPITAL__ */