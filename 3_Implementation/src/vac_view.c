/**
 * @file vac_view.c
 * @author your name (you@domain.com)
 * @brief used to veiw the people who registered for the vaccine
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
int vac_view(int read, char temp[])
{
	char name[20];
	
	Title();// call Title function
	FILE *ptr;
	ptr=fopen("Record3.dat","r");
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
	while(fscanf(ptr,"%s %s %c %i %s %s %s %s %s\n", p1.First_Name, p1.Last_Name, &p1.Gender, &p1.age, p1.Address, p1.Contact_no, p1.Email, p1.Center_name, p1.Date)!=EOF)
	{
		if(strcmp(p1.First_Name,name)==0)
		{
			
			printf("%s %s",p1.First_Name, p1.Last_Name);
			
			printf("%c",p1.Gender);
			
			printf("%i",p1.age);
		
			printf("%s",p1.Address);
			
			printf("%s",p1.Contact_no);
			
			printf("%s",p1.Email);
		
			printf("%s",p1.Center_name);
		
			printf("%s",p1.Date);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p1.First_Name,name)!=0)
	   {
		
		printf("Record not found!");
	
        return 0;
	   }
	fclose(ptr);
	
	return 1;
}
