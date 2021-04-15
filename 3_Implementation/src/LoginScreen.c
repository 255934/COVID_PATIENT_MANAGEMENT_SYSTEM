/**
 * @file LoginScreen.c
 * @author your name (you@domain.com)
 * @brief creates a login screen for the  program
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation


#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"
/**
 * @brief provides the login screen and other options
 * 
 */
void LoginScreen(void)//function for login screen
{
//list of variables	
int e=0	;
char Username[15];
char Password[15];
char o_U[10]="admin";
char o_P[10]="admin";

do
{
	printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
	printf("\n\n\n\t\t\t\t\tUSERNAME:");
	scanf("%s",Username);
	
	printf("\n\n\t\t\t\t\tPASSWORD:");
	scanf("%s",Password);
	
	if (strcmp(Username,o_U)==0 && strcmp(Password,o_P)==0)
	{
		printf("\n\n\n\t\t\t\t\t...Login Successfull...");
		
		
			MainMenu(0);//call MainMenu function
		break;
	}
	else
	{
		printf("\n\t\t\tPassword in incorrect:( Try Again :)");
		e++;
		
	}

}
while(e<=2);
	if(e>2)
	{
	printf("%d",e);
	printf("You have cross the limit. You cannot login. :( :(");
	
    ex_it(0);
	}
 

}
