//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation


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

		row=17;
		while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, 
					&p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
		{
		
			printf("%s %s ",p.First_Name, p.Last_Name);
		
			printf("%c ",p.Gender);
			
			printf("%i ",p.age);
		
			printf("%s ",p.Address);
			
			printf("%s ",p.Contact_no);
		
			printf("%s ",p.Email);
		
			printf("%s ",p.Problem);

			printf("%s\n",p.Doctor);
			
			row++;
		}
		fclose(ek);
	
		return 1;
}
