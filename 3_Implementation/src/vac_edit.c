/**
 * @file vac_edit.c
 * @author your name (you@domain.com)
 * @brief used to edit the record in database for vacination
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
 * @brief used to edit records for the database
 * 
 * @param read  determines if the function is being useds to test or not
 * @param temp  passing string for testing
 * @return int 
 */
int vac_edit(int read, char temp[])
{
	FILE *ptr, *ptr1;
  int i,b, valid=0;
  char ch;
  char name[20];

  	Title();// call Title window
 		ptr1=fopen("temp3.dat","w+");
	   ptr=fopen("Record3.dat","r");
	   if(ptr==NULL)
	   {
		printf("\n\t Can not open file!! ");
		    fclose(ptr1);
	   
	
		return 0;
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Patients Record !!!!!!!!!!!!!\n");

	   	
		if(read==0)
		{
		printf("Enter the First Name of the Patient : ");
	   	scanf(" %s",name);
		name[0]=toupper(name[0]);
		}
		else{

			strcpy(name,temp);
		}
	   	fflush(stdin);
	   	
	
		
		if(ptr1==NULL)
		{
			printf("\n Can not open file");
			
	   		fclose(ptr);
		
			return 0;
		}
		while(fscanf(ptr,"%s %s %c %i %s %s %s %s %s\n", p1.First_Name, p1.Last_Name, &p1.Gender, &p1.age, p1.Address, p1.Contact_no, p1.Email, p1.Center_name, p1.Date)!=EOF)
		{
			if(strcmp(p1.First_Name, name)==0)
			{
				valid=1;
				
				printf("*** Existing Record ***");
				
				printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s \t%s\n",p1.First_Name,p1.Last_Name,p1.Gender, p1.age,p1.Address,p1.Contact_no,p1.Email,p1.Center_name,p1.Date);
				
				printf("Enter New First Name: ");
				scanf("%s",p1.First_Name);    
				
				printf("Enter Last Name: ");
				scanf("%s",p1.Last_Name);
				printf("Enter Gender: ");
				scanf(" %c",&p1.Gender);
				p.Gender=toupper(p1.Gender);
				
				printf("Enter age: ");
				scanf(" %i",&p1.age);
				
				printf("Enter Address: ");
				scanf("%s",p1.Address);
				p.Address[0]=toupper(p1.Address[0]);
			
				printf("Enter Contact no: ");
				scanf("%s",p1.Contact_no);
				
				printf("Enter New email: ");
				scanf("%s",p1.Email);
			 
				printf("Enter Problem: ");
				scanf("%s",p1.Center_name);
				p1.Center_name[0]=toupper(p1.Center_name[0]);
			  
				printf("Enter Doctor: ");
			    scanf("%s",p1.Date);
			   
			 
			
				
				fprintf(ptr1,"%s %s %c %i %s %s %s %s %s\n",p1.First_Name,p1.Last_Name,p1.Gender, p1.age,p1.Address,p1.Contact_no,p1.Email,p1.Center_name,p1.Date);
				printf("\n\n\t\t\tVaccine record record updated successfully...");
		
			}
			else
			{
			fprintf(ptr1,"%s %s %c %i %s %s %s %s %s\n",p1.First_Name,p1.Last_Name,p1.Gender, p1.age,p1.Address,p1.Contact_no,p1.Email,p1.Center_name,p1.Date);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ptr1);
	   fclose(ptr);
	   remove("Record3.dat");
   	   rename("temp3.dat","Record3.dat");
	
		return 1;	
}
