//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation

#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
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
	gotoxy(12,8);
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
			gotoxy(1,15);
			printf("Full Name");
			gotoxy(25,15);
			printf("Gender");
			gotoxy(32,15);
			printf("Age");
			gotoxy(37,15);
			printf("Address");
			gotoxy(52,15);
			printf("Contact No.");
			gotoxy(64,15);
			printf("Email");
			gotoxy(80,15);
			printf("Problem");
			gotoxy(95,15);
			printf("Prescribed Doctor\n");
			printf("=================================================================================================================");
			gotoxy(1,18);
			printf("%s %s",p.First_Name, p.Last_Name);
			gotoxy(25,18);
			printf("%c",p.Gender);
			gotoxy(32,18);
			printf("%i",p.age);
			gotoxy(37,18);
			printf("%s",p.Address);
			gotoxy(52,18);
			printf("%s",p.Contact_no);
			gotoxy(64,18);
			printf("%s",p.Email);
			gotoxy(80,18);
			printf("%s",p.Problem);
			gotoxy(95,18);
			printf("%s",p.Doctor);
			printf("\n");
			break;
		}
	   }
	   if(strcmp(p.First_Name,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		return 0;
	   }
	fclose(ek);
	return 1;
}
