#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <LibraryManagementSystem_operations.h>
#define PROJECT_NAME    "LibraryManagementSystem"

/* Prototypes for all the test functions */
void test_Add_Book(void);
void test_Search_Book(void);
void test_Edit_Book(void);
void test_Delete_Book(void);
void test_Moderate_student_request(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "Add_Book", test_Add_Book);
  CU_add_test(suite, "Search_Book", test_Search_Book);
  CU_add_test(suite, "Edit_Book", test_Edit_Book);
  CU_add_test(suite, "Delete_Book", test_Delete_Book);
   CU_add_test(suite, "Moderate_student_request", Moderate_student_request);
 



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
void test_Add_Book(void) {
  CU_ASSERT(30 ==Add_Book(10, 20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == Add_Book(750, 7500));
}

void test_Search_Book(void) {
  CU_ASSERT(-3 == Search_Book(0, 3));
  
  /* Dummy fail*/
  CU_ASSERT(1 == Search_Book(1000, 900));
}

void test_Edit_Book(void) {
  CU_ASSERT(0 == Edit_Book(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(2 == Edit_Book(2, 5));
}

void test_Delete_Book(void) {
  CU_ASSERT(0 == Delete_Book(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == Delete_Book(2, 2));
}

void test_Moderate_student_request(void) {
  CU_ASSERT(0 == Moderate_student_request(1, 0));
  
  /* Dummy fail*/
  CU_ASSERT(3 == Moderate_student_request(2, 2));
}
