#include<average_operations.h>
#include<basic_operation.h>
#include<bin_to_dec.h>
#include<dec_to_bin.h>
#include<exponential.h>
#include<factorial.h>
#include<interest.h>
#include<logarthmic.h>
#include<power.h>
#include<trignometry1.h>
#include "unity.h"

#define PROJECT_NAME "SDLC_Calculator"

void test_add_1(void);
void test_add_2(void);
void test_subtract_1(void);
void test_subtract_2(void);
void test_multiply(void);
void test_divide_1(void);
void test_divide_2(void);

void setUp(){}

void tearDown(){}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_add_1);
    RUN_TEST(test_add_2);
    RUN_TEST(test_subtract_1);
    RUN_TEST(test_subtract_2);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide_1);
    RUN_TEST(test_divide_2);

    return UNITY_END();
}


void test_add_1(void){
    TEST_ASSERT_EQUAL(25, basic_operation_test(20, 5, 1));
}

void test_add_2(void){
<<<<<<< Updated upstream
    TEST_ASSERT_EQUAL(-10, basic_operaion_test(-30, 10, 1));
=======
    TEST_ASSERT_EQUAL(-20, basic_operaion_test(-30, 10, 1);)
>>>>>>> Stashed changes
}

void test_subtract_1(void){
    TEST_ASSERT_EQUAL(15, basic_operation_test(20, 5, 2));
    TEST_ASSERT_EQUAL(-3, basic_operation_test(2, 5, 2));
}
}

void test_subtract_2(void){
    TEST_ASSERT_EQUAL(-40, basic_operaion_test(-30, 10, 2));
    TEST_ASSERT_EQUAL(-8, basic_operaion_test(-2, 6, 2));
}
void test_multiply_1(void){
    TEST_ASSERT_EQUAL(6, basic_operation_test(2, 3, 3));
}

void test_multiply_2(void){
    TEST_ASSERT_EQUAL(-18, basic_operaion_test(-3, 6, 3));
}

void test_divide_1(void){
    TEST_ASSERT_EQUAL(2, basic_operaion_test(6, 2, 4));
}






























































































































void test_interest_1(void){
    TEST_ASSERT_EQUAL(2250, basic_operation_test(10000, 3, 7.5));
    TEST_ASSERT_EQUAL(5100, basic_operation_test(15000, 5, 6.8));
}

void test_interest_2(void){
    TEST_ASSERT_EQUAL(1650, basic_operaion_test(3000, 10, 5.5));
    TEST_ASSERT_EQUAL(780, basic_operaion_test(5000, 2, 7.8));
}