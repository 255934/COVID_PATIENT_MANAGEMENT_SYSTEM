//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation


#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"
void LoginScreen(void)//function for login screen
{
//list of variables	
int e=0	;
char Username[15];
char Password[15];
char original_Username[25]="admin";
char original_Password[15]="admin";

do
{
	printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
	printf("\n\n\n\t\t\t\t\tUSERNAME:");
	scanf("%s",&Username);
	
	printf("\n\n\t\t\t\t\tPASSWORD:");
	scanf("%s",&Password);
	
	if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
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
 
system("cls");
}
