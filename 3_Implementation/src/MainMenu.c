//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<windows.h>
#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>
#include "covid_management.h"
int MainMenu(int read)//function decleration
{
	struct patient t;
	t.age=50;
	
	
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. Add Patients Record\n");
	printf("\n\t\t\t\t2. List Patients Record\n");
	printf("\n\t\t\t\t3. Search Patients Record\n");
	printf("\n\t\t\t\t4. Edit Patients Record\n");
	printf("\n\t\t\t\t5. Delete Patients Record\n");
	printf("\n\t\t\t\t6. Exit\n");
	printf("\n\t\t\t\t7. VAC REG\n");
	printf("\n\t\t\t\t8. VAC EDIT\n");
	printf("\n\t\t\t\t9. VAC VIEW\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 9:");
	if(read==0)
	{
	scanf("%i", &choose);
	}
	else{
		choose=read;
	}
	
	switch(choose)//switch to differeht case
	{
	
	case 1:
	Add_rec(0);//Add_rec function is called
    	return 1;
    case 2:
    	func_list(0);
    	return 2;
	case 3:
	Search_rec(0,"");//View_rec function is call
    	return 3;
	case 4:
		Edit_rec(0,"");//Edit_rec function is call
		return 4;
	case 5:
		Dlt_rec(0,"");//Dlt_rec function is call
		return 5;
	case 6:
		ex_it(0);//ex_it function is call
    	return 6;
	case 7:
		vac_add(0);
		return 7;
	case 8:
		vac_edit(0,"");
		return 8;
	case 9:
		vac_view(0,"");
		return 9;


	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
		return 0;
	}//end of switch
	return 1;
		
	
}