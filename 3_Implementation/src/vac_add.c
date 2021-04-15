/**
 * @file vac_add.c
 * @author your name (you@domain.com)
 * @brief vacination registration function , stores in database
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
 * @brief adds the details of vaccine registration
 * 
 * @param read  value determines if test is performed or not
 * @return int 
 */
int vac_add(int read)
{
	
	Title();// call Title function
	//list of variables
	char anwer;

	FILE*ptr;//file pointer
	ptr=fopen("Record3.dat","a");//open file in write mode
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Add Patients Record !!!!!!!!!!!!!\n");
	
	/* **************************First Name*********************************** */

	printf("\n\t\t\tFirst Name: ");
	if(read==0)
	{
	scanf("%s",p1.First_Name);
	}
	p1.First_Name[0]=toupper(p1.First_Name[0]);
	if(strlen(p1.First_Name)>20||strlen(p1.First_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		 fclose(ptr);
		return 1;
	}
	else
	{
		for (bad=0;bad<strlen(p1.First_Name);bad++)
		{
			if (isalpha(p1.First_Name[bad]))
			{
				v=1;
			}
			else
			{
				v=0;
				break;
			}
		}
		if(!v)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			 fclose(ptr);
			return 2;
		}
	}
	
	/* ********************************************** Last name ************************************************ */

	printf("\n\t\t\tLast Name: ");
	if(read==0)
	{
    scanf("%s",p1.Last_Name);
	}
    p1.Last_Name[0]=toupper(p1.Last_Name[0]);
    if(strlen(p1.Last_Name)>20||strlen(p1.Last_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for last name is 20 and min range is 2 :)");
	     fclose(ptr);
		return 3;
	}
	else
	{
		for (bad=0;bad<strlen(p1.Last_Name);bad++)
		{
			if (isalpha(p1.Last_Name[bad]))
			{
				v=1;
			}
			else
			{
				v=0;
				break;
			}
		}
		if(!v)
		{
			printf("\n\t\t Last name contain Invalid character :(  Enter again :)");
			 fclose(ptr);
			return 4;
		}
	}
/* ******************************************* Gender ************************************************************** */	    
	
	    printf("\n\t\t\tGender[F/M]: ");
		if(read==0)
		{
		scanf(" %c",&p1.Gender);
		}
		if(toupper(p1.Gender)=='M'|| toupper(p1.Gender)=='F')
		{
			tt =1;
		}
		else 
		{
		tt =0;
		}
        if(!tt)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
		 fclose(ptr);
			return 5;
    	}
	
/* ***************************************** Age ********************************************************************** */	
    printf("\n\t\t\tAge:");
	if(read==0)
	{
    scanf(" %i",&p1.age);
	}
/* **************************************** Address ******************************************************************* */    
   
    printf("\n\t\t\tAddress: ");
	if(read==0)
	{
    scanf("%s",p1.Address);
	}
    p1.Address[0]=toupper(p1.Address[0]);
    if(strlen(p1.Address)>20||strlen(p1.Address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
	     fclose(ptr);
		return 6;
	}
	


	
    printf("\n\t\t\tContact no: ");
	if(read==0)
	{
    scanf("%s",p1.Contact_no);
	}
    if(strlen(p1.Contact_no)>10||strlen(p1.Contact_no)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
	     fclose(ptr);
		return 7;
	}
	else
	{
		for (bad=0;bad<strlen(p1.Contact_no);bad++)
		{
			if (!isalpha(p1.Contact_no[bad]))
			{
				v=1;
			}
			else
			{
				v=0;
				break;
			}
		}
		if(!v)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			 fclose(ptr);
			return 8;
		}
	}

/* ************************************************** Email ******************************************** */

    printf("\n\t\t\tEmail: ");
	if(read==0)
	{
    scanf("%s",p1.Email);
	}
    if (strlen(p1.Email)>30||strlen(p1.Email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");
	     fclose(ptr);
	   return 9;	
	}

/* ********************************************************* Problem *********************************************** */

    printf("\n\t\t\tProblem: ");
	if(read==0)
	{
    scanf("%s",p1.Center_name);
	}
    p1.Center_name[0]=toupper(p1.Center_name[0]);
    if(strlen(p1.Center_name)>15||strlen(p1.Center_name)<3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 15 and min range is 3 :)");
	     fclose(ptr);
		return 10;
	}
	else
	{
		for (bad=0;bad<strlen(p1.Center_name);bad++)
		{
			if (isalpha(p1.Center_name[bad]))
			{
				v=1;
			}
			else
			{
				v=0;
				break;
			}
		}
		if(!v)
		{
			printf("\n\t\t Problem contain Invalid character :(  Enter again :)");
			 fclose(ptr);
			return 11;
		}
	}
/* ********************************************** Prescribed Doctor **************************************** */	
	
    printf("\n\t\t\tPrescribed Doctor:");
	if(read==0)
	{
    scanf("%s",p1.Date);
	}
    ;
   
    
    fprintf(ptr," %s %s %c %i %s %s %s %s %s\n", p1.First_Name, p1.Last_Name, p1.Gender, p1.age, p1.Address, p1.Contact_no, p1.Email, p1.Center_name, p1.Date);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ptr);//ek file is closed
	return p.age;
}
