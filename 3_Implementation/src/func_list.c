//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation

#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"
int func_list(int useless)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("Record2.dat","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! List Patients Record !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("Full Name ");
		gotoxy(20,15);
		printf("Gender ");
		gotoxy(32,15);
		printf("Age ");
		gotoxy(37,15);
		printf("Address ");
		gotoxy(49,15);
		printf("Contact No. ");
		gotoxy(64,15);
		printf("Email ");
		gotoxy(88,15);
		printf("Problem ");
		gotoxy(98,15);
		printf("Prescribed Doctor\n");
		printf("=================================================================================================================\n");
		row=17;
		while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, 
					&p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
		{
			gotoxy(1,row);
			printf("%s %s ",p.First_Name, p.Last_Name);
			gotoxy(20,row);
			printf("%c ",p.Gender);
			gotoxy(32,row);
			printf("%i ",p.age);
			gotoxy(37,row);
			printf("%s ",p.Address);
			gotoxy(49,row);
			printf("%s ",p.Contact_no);
			gotoxy(64,row);
			printf("%s ",p.Email);
			gotoxy(88,row);
			printf("%s ",p.Problem);
			gotoxy(98,row);
			printf("%s\n",p.Doctor);
			
			row++;
		}
		fclose(ek);
	
		return 1;
}
