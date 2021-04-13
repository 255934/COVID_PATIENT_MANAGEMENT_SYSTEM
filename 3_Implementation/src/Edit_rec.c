//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation

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
	   	
		
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			
			return 0;
		}
		while(fscanf(ek,"%s %s %c %i %s %s %s %s %s\n", p.First_Name, p.Last_Name, &p.Gender, &p.age, p.Address, p.Contact_no, p.Email, p.Problem, p.Doctor)!=EOF)
		{
			if(strcmp(p.First_Name, name)==0)
			{
				valid=1;
			
				printf("*** Existing Record ***");
		
				printf("%s \t%s \t%c \t%i \t%s \t%s \t%s \t%s \t%s\n",p.First_Name,p.Last_Name,p.Gender, p.age,p.Address,p.Contact_no,p.Email,p.Problem,p.Doctor);
			
				printf("Enter New First Name: ");
				scanf("%s",p.First_Name);    
			
				printf("Enter Last Name: ");
				scanf("%s",p.Last_Name);
			
				printf("Enter Gender: ");
				scanf(" %c",&p.Gender);
				p.Gender=toupper(p.Gender);
				
				printf("Enter age: ");
				scanf(" %i",&p.age);
				
				printf("Enter Address: ");
				scanf("%s",p.Address);
				p.Address[0]=toupper(p.Address[0]);
				
				printf("Enter Contact no: ");
				scanf("%s",p.Contact_no);
			
				printf("Enter New email: ");
				scanf("%s",p.Email);
			
				printf("Enter Problem: ");
				scanf("%s",p.Problem);
				p.Problem[0]=toupper(p.Problem[0]);
			   
				printf("Enter Doctor: ");
			    scanf("%s",p.Doctor);
			    p.Doctor[0]=toupper(p.Doctor[0]);
			    printf("\nPress U charecter for the Updating operation : ");
				scanf("%c",&ch);
				
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
	
		return 1;	
}
