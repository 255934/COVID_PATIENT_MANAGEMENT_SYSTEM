//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation


#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"

int Search_rec(int read, char temp[])
{
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("Record2.dat","r");
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
	while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
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
	fclose(ek);
	return 1;
}
