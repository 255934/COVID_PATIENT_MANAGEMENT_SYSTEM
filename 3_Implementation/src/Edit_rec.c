//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation

#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"
int Edit_rec(int read, char temp[])
{
	FILE *ek, *ft;
  int i,b, valid=0;
  char ch;
  char name[20];

  system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.dat","w+");
	   ek=fopen("Record2.dat","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		return 0;
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Patients Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	
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
	   	
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			return 0;
		}
		while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
		{
			if(strcmp(p.First_Name, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s \t%s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);
				gotoxy(12,22);	
				printf("Enter New First Name: ");
				scanf("%s",p.First_Name);    
				gotoxy(12,24);
				printf("Enter Last Name: ");
				scanf("%s",p.Last_Name);
				gotoxy(12,26);
				printf("Enter Gender: ");
				scanf(" %c",&p.Gender);
				p.Gender=toupper(p.Gender);
				gotoxy(12,28);
				printf("Enter age: ");
				scanf(" %i",&p.age);
				gotoxy(12,30);
				printf("Enter Address: ");
				scanf("%s",p.Address);
				p.Address[0]=toupper(p.Address[0]);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",p.Contact_no);
				gotoxy(12,34);
				printf("Enter New email: ");
				scanf("%s",p.Email);
			    gotoxy(12,36);
				printf("Enter Problem: ");
				scanf("%s",p.Problem);
				p.Problem[0]=toupper(p.Problem[0]);
			    gotoxy(12,38);
				printf("Enter Doctor: ");
			    scanf("%s",p.Doctor);
			    p.Doctor[0]=toupper(p.Doctor[0]);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %c %i %s %s %s %s %s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);
				printf("\n\n\t\t\tPatient record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %c %i %s %s %s %s %s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	   fclose(ft);
	   fclose(ek);
	   remove("Record2.dat");
   	   rename("temp2.dat","Record2.dat");
		getch();
		return 1;	
}
