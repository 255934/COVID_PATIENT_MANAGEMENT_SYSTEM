/**
 * @file Search_rec.c
 * @author your name (you@domain.com)
 * @brief searching records in the database using name
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
 * @brief used to search records for the database
 * 
 * @param read  determines if the function is being useds to test or not
 * @param temp  passing string for testing
 * @return int 
 */
int Search(int read, char temp[])
{
	char name[20];
	
	Title();// call Title function
	FILE *ptr;
	ptr=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Patients Record !!!!!!!!!!!!!\n");
	
	printf("\n Enter Patient Name to be viewed:");
	if(read==0)
	{
	scanf("%s",name);}
	else{
		strcpy(name,temp);
	}
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ptr,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
	{
		if(strcmp(p.First_Name,name)==0)
		{
			
			printf("%s %s",p.First_Name, p.Last_Name);
			
			printf("%c",p.Gender);
			
			printf("%i",p.age);
			
			printf("%s",p.Address);
			
			printf("%s",p.Contact_no);
			
			printf("%s",p.Email);
		
			printf("%s",p.Problem);
			
			printf("%s",p.Doctor);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.First_Name,name)!=0)
	   {
		
		printf("Record not found!");
		return 0;
	   }
	fclose(ptr);
	return 1;
}
