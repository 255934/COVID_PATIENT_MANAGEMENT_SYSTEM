//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation


#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"
int vac_add(int read)
{
	system("cls");
	Title();// call Title function
	//list of variables
	char ans;

	FILE*ek;//file pointer
	ek=fopen("Record3.dat","a");//open file in write mode
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!\n");
	
	/* **************************First Name*********************************** */

	printf("\n\t\t\tFirst Name: ");
	if(read==0)
	{
	scanf("%s",p.First_Name);
	}
	p.First_Name[0]=toupper(p.First_Name[0]);
	if(strlen(p.First_Name)>20||strlen(p.First_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		return 1;
	}
	else
	{
		for (b=0;b<strlen(p.First_Name);b++)
		{
			if (isalpha(p.First_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			return 2;
		}
	}
	
	/* ********************************************** Last name ************************************************ */

	printf("\n\t\t\tLast Name: ");
	if(read==0)
	{
    scanf("%s",p.Last_Name);
	}
    p.Last_Name[0]=toupper(p.Last_Name[0]);
    if(strlen(p.Last_Name)>20||strlen(p.Last_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");
		return 3;
	}
	else
	{
		for (b=0;b<strlen(p.Last_Name);b++)
		{
			if (isalpha(p.Last_Name[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Last name contain Invalid character :(  Enter again :)");
			return 4;
		}
	}
/* ******************************************* Gender ************************************************************** */	    
	do
	{
	    printf("\n\t\t\tGender[F/M]: ");
		if(read==0)
		{
		scanf(" %c",&p.Gender);
		}
		if(toupper(p.Gender)=='M'|| toupper(p.Gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
			return 5;
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
	if(read==0)
	{
    scanf(" %i",&p.age);
	}
/* **************************************** Address ******************************************************************* */    
    do
    {
    
    printf("\n\t\t\tAddress: ");
	if(read==0)
	{
    scanf("%s",p.Address);
	}
    p.Address[0]=toupper(p.Address[0]);
    if(strlen(p.Address)>20||strlen(p.Address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
		return 6;
	}
	
}while(!valid);
/* ******************************************* Contact no. ***************************************** */
do
{
	
    printf("\n\t\t\tContact no: ");
	if(read==0)
	{
    scanf("%s",p.Contact_no);
	}
    if(strlen(p.Contact_no)>10||strlen(p.Contact_no)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		return 7;
	}
	else
	{
		for (b=0;b<strlen(p.Contact_no);b++)
		{
			if (!isalpha(p.Contact_no[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			return 8;
		}
	}
}while(!valid);
/* ************************************************** Email ******************************************** */
do
{
    printf("\n\t\t\tEmail: ");
	if(read==0)
	{
    scanf("%s",p.Email);
	}
    if (strlen(p.Email)>30||strlen(p.Email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");
	   return 9;	
	}
}while(strlen(p.Email)>30||strlen(p.Email)<8);
/* ********************************************************* Problem *********************************************** */

    printf("\n\t\t\tProblem: ");
	if(read==0)
	{
    scanf("%s",p.Problem);
	}
    p.Problem[0]=toupper(p.Problem[0]);
    if(strlen(p.Problem)>15||strlen(p.Problem)<3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 15 and min range is 3 :)");
		return 10;
	}
	else
	{
		for (b=0;b<strlen(p.Problem);b++)
		{
			if (isalpha(p.Problem[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Problem contain Invalid character :(  Enter again :)");
			return 11;
		}
	}
/* ********************************************** Prescribed Doctor **************************************** */	
	
    printf("\n\t\t\tPrescribed Doctor:");
	if(read==0)
	{
    scanf("%s",p.Doctor);
	}
    p.Doctor[0]=toupper(p.Doctor[0]);
    if(strlen(p.Doctor)>30||strlen(p.Doctor)<3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 30 and min range is 3 :)");
		return 12;
	}
	else
	{
		for (b=0;b<strlen(p.Doctor);b++)
		{
			if (isalpha(p.Doctor[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Doctor name contain Invalid character :(  Enter again :)");
			return 13;
		}
	}
    
    fprintf(ek," %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
	return p.age;
}
