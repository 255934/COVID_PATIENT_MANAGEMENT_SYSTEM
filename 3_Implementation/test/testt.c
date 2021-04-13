#include "unity.h"
#include "covid_management.h"
#include <string.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"
int b=0;
int valid=1;
int ok=1;
/* Prototypes for all the test functions */
void test_add(void);
void test_vac_add(void);
void test_dlt(void);
void test_exit(void);
void test_func_list(void);
void test_gotoxy(void);
void test_search_rec(void);
void test_vac_search_rec(void);
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_vac_add);
  RUN_TEST(test_dlt);
  RUN_TEST(test_exit);
  RUN_TEST(test_func_list);
  RUN_TEST(test_gotoxy);
  RUN_TEST(test_search_rec);
  RUN_TEST(test_vac_search_rec);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
void test_gotoxy()
{
  TEST_ASSERT_EQUAL(5, gotoxy(2,3));

}
void test_search_rec()
{
  TEST_ASSERT_EQUAL(1,Search_rec(1,"Milan"));
  TEST_ASSERT_EQUAL(0,Search_rec(1,"random"));

}
void test_vac_search_rec()
{
  TEST_ASSERT_EQUAL(1,vac_view(1,"Milan"));
  TEST_ASSERT_EQUAL(0,vac_view(1,"random"));

}
void test_main_menu()
{
  TEST_ASSERT_EQUAL(1,MainMenu(1));
  TEST_ASSERT_EQUAL(2,MainMenu(2));
  TEST_ASSERT_EQUAL(3,MainMenu(3));
  TEST_ASSERT_EQUAL(4,MainMenu(4));
  TEST_ASSERT_EQUAL(5,MainMenu(5));
  TEST_ASSERT_EQUAL(6,MainMenu(6));
  TEST_ASSERT_EQUAL(7,MainMenu(7));
  TEST_ASSERT_EQUAL(8,MainMenu(8));
  TEST_ASSERT_EQUAL(9,MainMenu(9));
}
void reset_struct()
{
   p.age=12;
  strcpy(p.First_Name,"Milan");
  strcpy(p.Address,"Mumbai");
  strcpy(p.Contact_no,"9004088473");
  strcpy(p.Doctor,"ramesh");
  strcpy(p.Email,"milan.apegankar12@gmai.com");
  p.Gender='M';
  strcpy(p.Last_Name,"Apegankar");
  strcpy(p.Problem,"XStrain");

}
void test_exit()
{
   TEST_ASSERT_EQUAL(1, ex_it(0));
}
void test_func_list()
{
  TEST_ASSERT_EQUAL(1,func_list(1));
}
void test_dlt()
{
  TEST_ASSERT_EQUAL(1, Dlt_rec(1,"Milan"));
  TEST_ASSERT_EQUAL(0,Dlt_rec(1,"random"));
}

/* Write all the test functions */ 
void test_add(void) {
  reset_struct();
  TEST_ASSERT_EQUAL(p.age, Add_rec(1));
  strcpy(p.First_Name,"M");
  TEST_ASSERT_EQUAL(1, Add_rec(1));
  strcpy(p.First_Name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(1, Add_rec(1));
  strcpy(p.First_Name,"M2M");
  TEST_ASSERT_EQUAL(2, Add_rec(1));
  reset_struct();
  strcpy(p.Last_Name,"M");
  TEST_ASSERT_EQUAL(3, Add_rec(1));
  strcpy(p.Last_Name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(3, Add_rec(1));
  strcpy(p.Last_Name,"M2M");
  TEST_ASSERT_EQUAL(4, Add_rec(1));
  reset_struct();
  p.Gender='H';
  TEST_ASSERT_EQUAL(5, Add_rec(1));
  reset_struct();
  strcpy(p.Address,"Mu");
  TEST_ASSERT_EQUAL(6, Add_rec(1));
  strcpy(p.Address,"Mummmmmmmmmmmmmmmmmmm");
  TEST_ASSERT_EQUAL(6, Add_rec(1));
  reset_struct();
  strcpy(p.Contact_no,"90040873");
  TEST_ASSERT_EQUAL(7, Add_rec(1));
  strcpy(p.Contact_no,"90040zz873");
  TEST_ASSERT_EQUAL(8, Add_rec(1));
  reset_struct();
  strcpy(p.Email,"milan.");
  TEST_ASSERT_EQUAL(9, Add_rec(1));
  reset_struct();
  strcpy(p.Problem,"mm");
  TEST_ASSERT_EQUAL(10, Add_rec(1));
  strcpy(p.Problem,"m**m");
  TEST_ASSERT_EQUAL(11, Add_rec(1));
  reset_struct();
  strcpy(p.Doctor,"LL");
  TEST_ASSERT_EQUAL(12, Add_rec(1));
   strcpy(p.Doctor,"L***L");
  TEST_ASSERT_EQUAL(13, Add_rec(1));
  
}
void test_vac_add(void) {
  reset_struct();
  TEST_ASSERT_EQUAL(p.age, vac_add(1));
  strcpy(p.First_Name,"M");
  TEST_ASSERT_EQUAL(1, vac_add(1));
  strcpy(p.First_Name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(1, vac_add(1));
  strcpy(p.First_Name,"M2M");
  TEST_ASSERT_EQUAL(2, vac_add(1));
  reset_struct();
  strcpy(p.Last_Name,"M");
  TEST_ASSERT_EQUAL(3, vac_add(1));
  strcpy(p.Last_Name,"MMMMMMMMMMMMMMMMMMMMMMMMMMM");
  TEST_ASSERT_EQUAL(3,vac_add(1));
  strcpy(p.Last_Name,"M2M");
  TEST_ASSERT_EQUAL(4, vac_add(1));
  reset_struct();
  p.Gender='H';
  TEST_ASSERT_EQUAL(5, vac_add(1));
  reset_struct();
  strcpy(p.Address,"Mu");
  TEST_ASSERT_EQUAL(6, vac_add(1));
  strcpy(p.Address,"Mummmmmmmmmmmmmmmmmmm");
  TEST_ASSERT_EQUAL(6, vac_add(1));
  reset_struct();
  strcpy(p.Contact_no,"90040873");
  TEST_ASSERT_EQUAL(7, vac_add(1));
  strcpy(p.Contact_no,"90040zz873");
  TEST_ASSERT_EQUAL(8, vac_add(1));
  reset_struct();
  strcpy(p.Email,"milan.");
  TEST_ASSERT_EQUAL(9, vac_add(1));
  reset_struct();
  strcpy(p.Problem,"mm");
  TEST_ASSERT_EQUAL(10, vac_add(1));
  strcpy(p.Problem,"m**m");
  TEST_ASSERT_EQUAL(11, vac_add(1));
  reset_struct();
  strcpy(p.Doctor,"LL");
  TEST_ASSERT_EQUAL(12,vac_add(1));
   strcpy(p.Doctor,"L***L");
  TEST_ASSERT_EQUAL(13, vac_add(1));
  
}



