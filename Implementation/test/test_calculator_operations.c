#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_lcm(void);
void test_gcd(void);
void test_permutation(void);
void test_combination(void);
void test_factorial(void);
void test_powerof(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "lcm", test_lcm);
   CU_add_test(suite, "gcd", test_gcd);
    CU_add_test(suite, "permutation", test_permutation);
 CU_add_test(suite, "combination", test_combination);
CU_add_test(suite, "factorial", test_factorial);
CU_add_test(suite, "powerof", test_powerof);



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
void test_add(void) {
  CU_ASSERT(30 == add(10, 20));

  /* Dummy fail*/
  CU_ASSERT(1500 == add(750, 7500));
}

void test_subtract(void) {
  CU_ASSERT(-3 == subtract(0, 3));

  /* Dummy fail*/
  CU_ASSERT(1 == subtract(1000, 900));
}

void test_multiply(void) {
  CU_ASSERT(0 == multiply(1, 0));

  /* Dummy fail*/
  CU_ASSERT(2 == multiply(2, 5));
}

void test_divide(void) {
  CU_ASSERT(0 == divide(1, 0));

  /* Dummy fail*/
  CU_ASSERT(3 == divide(2, 2));
}
void test_lcm(void) {
  CU_ASSERT(4 == lcm(2,4));

  
}
void test_gcd(void) {
  CU_ASSERT(2 == gcd(2,4));

  
}
void test_permutation(void) {
  CU_ASSERT(2 == permutation(2,1));
  CU_ASSERT(1 == permutation(2,0));
  CU_ASSERT(2 == permutation(2,2));
}
void test_combination(void) {
 CU_ASSERT(3 == combination(3,2));  
  CU_ASSERT(2 == combination(2,1));  
  CU_ASSERT(1 == combination(2,0));  
  CU_ASSERT(1 == combination(2,2));  
}
void test_factorial(void) {
  CU_ASSERT( 1== factorial(0));  
   CU_ASSERT( 6== factorial(3)); 
}
void test_powerof(void) {
  CU_ASSERT(27 == powerof(3,3));
   CU_ASSERT(1 == powerof(3,0)); 
  CU_ASSERT(2 == powerof(2,1));
  
   
}


