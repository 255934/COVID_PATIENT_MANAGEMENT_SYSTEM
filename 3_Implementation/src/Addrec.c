//HEADER FILES
/**
 * @file Addrec.c
 * @author your name (you@domain.com)
 * @brief  used to add record to database
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>//Use for standard I/O Operation


#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"
int bad=0;
int v=0;
int tt=0;
/**
 * @brief adds the details of patient
 * 
 * @param read  value determines if test is performed or not
 * @return int 
 */
int Add(int read)
{
	
	Title();// call Title function
	//list of variables
	char anwer;

	FILE*ptr;//file pointer
	ptr=fopen("Record2.dat","a");//open file in write mode
	printf("\t\t\t\t\t\t\t********** Add Patients Record*********\n");
	


	printf("\t\t\tFirst Name: ");
	if(read==0)
	{
	scanf("%s",p.First_Name);
	}
	p.First_Name[0]=toupper(p.First_Name[0]);
	if(strlen(p.First_Name)>20||strlen(p.First_Name)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		fclose(ptr);
		return 1;
	}
	else
	{
		for (bad=0;bad<strlen(p.First_Name);bad++)
		{
			if (isalpha(p.First_Name[bad]))
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
			printf("\n\t\t\tInvalid character \n");
			fclose(ptr);
			return 2;
		}
	}
	
	

	printf("\n\t\t\tLast Name: ");
	if(read==0)
	{
    scanf("%s",p.Last_Name);
	}
    p.Last_Name[0]=toupper(p.Last_Name[0]);
    if(strlen(p.Last_Name)>20||strlen(p.Last_Name)<2)
	{
		printf("\n\t\t\t Invalid");
	    	fclose(ptr);
		return 3;
	}
	else
	{
		for (bad=0;bad<strlen(p.Last_Name);bad++)
		{
			if (isalpha(p.Last_Name[bad]))
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

	    printf("\n\t\t\tGender[F/M]: ");
		if(read==0)
		{
		scanf(" %c",&p.Gender);
		}
		if(toupper(p.Gender)=='M'|| toupper(p.Gender)=='F')
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
	 
	
    printf("\n\t\t\tAge:");
	if(read==0)
	{
    scanf(" %i",&p.age);
	}

    
    
    printf("\n\t\t\tAddress: ");
	if(read==0)
	{
    scanf("%s",p.Address);
	}
    p.Address[0]=toupper(p.Address[0]);
    if(strlen(p.Address)>20||strlen(p.Address)<4)
	{
		printf("\n\t Invalid :( \t The max range for address is 20 and min range is 4 :)");
	    fclose(ptr);
		return 6;
	}
	


	
    printf("\n\t\t\tContact no: ");
	if(read==0)
	{
    scanf("%s",p.Contact_no);
	}
    if(strlen(p.Contact_no)>10||strlen(p.Contact_no)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
	    fclose(ptr);
		return 7;
	}
	else
	{
		for (bad=0;bad<strlen(p.Contact_no);bad++)
		{
			if (!isalpha(p.Contact_no[bad]))
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

    printf("\n\t\t\tEmail: ");
	if(read==0)
	{
    scanf("%s",p.Email);
	}
    if (strlen(p.Email)>30||strlen(p.Email)<8)
    {
       printf("\n\t Invalid :( \t The max range for email is 30 and min range is 8 :)");
	    fclose(ptr);
	   return 9;	
	}

    printf("\n\t\t\tProblem: ");
	if(read==0)
	{
    scanf("%s",p.Problem);
	}
    p.Problem[0]=toupper(p.Problem[0]);
    if(strlen(p.Problem)>15||strlen(p.Problem)<3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 15 and min range is 3 :)");
	    fclose(ptr);
		return 10;
	}
	else
	{
		for (bad=0;bad<strlen(p.Problem);bad++)
		{
			if (isalpha(p.Problem[bad]))
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

    printf("\n\t\t\tPrescribed Doctor:");
	if(read==0)
	{
    scanf("%s",p.Doctor);
	}
    p.Doctor[0]=toupper(p.Doctor[0]);
    if(strlen(p.Doctor)>30||strlen(p.Doctor)<3)
	{
		printf("\n\t Invalid :( \t The max range for first name is 30 and min range is 3 :)");
	    fclose(ptr);
		return 12;
	}
	else
	{
		for (bad=0;bad<strlen(p.Doctor);bad++)
		{
			if (isalpha(p.Doctor[bad]))
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
			printf("\n\t\t Doctor name contain Invalid character :(  Enter again :)");
			fclose(ptr);
			return 13;
		}
	}
    
    fprintf(ptr," %s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ptr);//ek file is closed
	return p.age;
    
}
