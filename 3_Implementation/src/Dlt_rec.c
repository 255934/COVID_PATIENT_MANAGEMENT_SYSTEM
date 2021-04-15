/**
 * @file Dlt_rec.c
 * @author your name (you@domain.com)
 * @brief used to delete record from database
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
 * @brief used to delete records for the database
 * 
 * @param read  determines if the function is being useds to test or not
 * @param temp  passing string for testing
 * @return int 
 */
int Deletes(int read, char temp[])
{
	char name[20];
	int found=0;
	
	Title();// call Title function
	FILE *ptr, *ptr1;
	ptr1=fopen("temp_file2.dat","w+");
	ptr=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Patients Record !!!!!!!!!!!!!\n");

	printf("\n Enter Patient Name to delete: ");
	fflush(stdin);
	if(read==0)
	{
	scanf("%s",name);
	name[0]=toupper(name[0]);
	}
	else
	{
		strcpy(name,temp);
	}
	
	
	while (fscanf(ptr,"%s %s %c %i %s %s %s %s %s", p.First_Name, p.Last_Name, &p.Gender,
			 &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
	{
		if (strcmp(p.First_Name,name)!=0)
		fprintf(ptr1,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
		else 
		{
			printf("%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, p.Gender, p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
	
		return 0;
		
	}
	else
	{
		fclose(ptr);
		fclose(ptr1);
		remove("Record2.dat");
		rename("temp_file2.dat","Record2.dat");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		
		return 1;
	
	}
} 
