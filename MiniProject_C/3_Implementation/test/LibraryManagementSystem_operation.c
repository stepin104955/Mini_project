#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <LibraryManagementSystem_operations.h>
#define PROJECT_NAME    "LibraryManagementSystem"

/* Prototypes for all the test functions */
void test_Add_Books(void);
void test_Search_Books(void);
void test_View_Books(void);
void test_Delete_Book(void);
void test_Update_Password(void);
void test_Exit(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "Add_Books", test_Add_Books);
  CU_add_test(suite, "Search_Books", test_Search_Books);
  CU_add_test(suite, "View_Books", test_View_Books);
  CU_add_test(suite, "Delete_Book", test_Delete_Book);
   CU_add_test(suite, "Update_Password", test_Update_Password);
  CU_add_test(suite, "Exit", test_Exit);



/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_Add_Books(void) {
  CU_ASSERT(30 ==Add_Books(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == Add_Books(750, 7500));
}

void test_Search_Books(void) {
  CU_ASSERT(-3 == Search_Books(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == Search_Books(1000, 900));
}

void test_View_Books(void) {
  CU_ASSERT(0 == View_Books(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == View_Books(2, 5));
}

void test_Delete_Book(void) {
  CU_ASSERT(0 == Delete_Book(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == Delete_Book(2, 2));
}

void test_Update_Password(void) {
  CU_ASSERT(0 == Update_Password(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == Update_Password(2, 2));
}

void test_Exit(void) {
  CU_ASSERT(0 == Exit(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == Exit(2, 2));
}
