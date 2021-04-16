/**
 * @file covid_management.h
 * @author your name (you@domain.com)
 * @brief the program is called covid management system
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
/**
 * @brief provides welcome screen for the program
 * 
 */
void WelcomeScreen(void);//WelcomeScreen function decleration
/**
 * @brief title screen for the program
 * 
 */
void Title(void);//Title function decleration
/**
 * @brief presents the main menu
 * 
 * @param read  used to determine if the function is used for testing
 * @return int 
 */
int MainMenu(int read);//MainMenu function decleration
/**
 * @brief provides the login screen and other options
 * 
 */
void LoginScreen(void);//LoginScreen function decleration
/**
 * @brief adds the details of patient
 * 
 * @param read  value determines if test is performed or not
 * @return int 
 */
int Add(int read);//Add_rec function declaration
/**
 * @brief prints all the values in database
 * 
 * @param useless  has no functionality other than testing
 * @return int 
 */
int func_list(int temp);//function to list the patient details 
/**
 * @brief used to search records for the database
 * 
 * @param read  determines if the function is being useds to test or not
 * @param temp  passing string for testing
 * @return int 
 */
int Search(int read,char temp[]);//Search_rec function declaration
/**
 * @brief used to edit records for the database
 * 
 * @param read  determines if the function is being useds to test or not
 * @param temp  passing string for testing
 * @return int 
 */
int Edit(int read,char temp[]);//Edit_rec function declaration
/**
 * @brief used to delete records for the database
 * 
 * @param read  determines if the function is being useds to test or not
 * @param temp  passing string for testing
 * @return int 
 */
int Deletes(int read,char temp[]);//Dlt_rec function declaration
/**
 * @brief exiting the system
 * 
 * @param useless  has no functionality but to test the function
 * @return int 
 */
int ex_it(int temp);//exit function declaration
/**
 * @brief adds the details of vaccine registration
 * 
 * @param read  value determines if test is performed or not
 * @return int 
 */
int vac_add(int read);
/**
 * @brief used to edit records for the database
 * 
 * @param read  determines if the function is being useds to test or not
 * @param temp  passing string for testing
 * @return int 
 */
int vac_edit(int read,char temp[]);
/**
 * @brief used to search records for the database
 * 
 * @param read  determines if the function is being useds to test or not
 * @param temp  passing string for testing
 * @return int 
 */
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