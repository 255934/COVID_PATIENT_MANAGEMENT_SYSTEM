/**
 * @file MainMenu.c
 * @author your name (you@domain.com)
 * @brief  used to create the menu for the program
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
 * @brief presents the main menu
 * 
 * @param read  used to determine if the function is used for testing
 * @return int 
 */
int MainMenu(int read)//function decleration
{
	struct patient t;
	t.age=50;
	
	

	int choose;
	char z;
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
	typedef enum {
		case1=1,
		case2,
		case3,
		case4,
		case5,
		case6,
		case7,
		case8,
		case9

	} numerate;

	int (*fun1) (int)=Add;
	int (*func2) (int ,char[])=vac_view ;
	int (*func3) (int)=ex_it;
	int (*func4) (int)=vac_add;
	int (*func5) (int, char[])=vac_edit;
	int (*func6) (int)=func_list;
	int (*func7) (int, char[])=Search;
	int (*func8) (int,char[])=Edit;
	int (*func9) (int,char[])=Deletes;
	switch(choose)//switch to differeht case
	{
	
	case case1:
		fun1(0);//Add_rec function is called
		
	
    	return 1;
    case case2:
    	func6(0);
		
    	return 2;
	case case3:
		func7(0,"");//View_rec function is call
		
    	return 3;
	case case4:
		func8(0,"");//Edit_rec function is call
		
		return 4;
	case case5:
		func9(0,"");//Dlt_rec function is call
		
		return 5;
	case case6:
		func3(0);//ex_it function is call
		
    	return 6;
	case case7:
		func4(0);
	
		return 7;
	case case8:
		func5(0,"");
		
		return 8;
	case case9:
		func2(0,"");
		
		return 9;


	default:
		printf("\t\t\tInvalid entry");
		
		return 0;
	}//end of switch
	
	
	return 1;
		
	
}
