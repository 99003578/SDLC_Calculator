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
    RUN_TEST(test_factorial);

    return UNITY_END();
}


void test_add_1(void){
    TEST_ASSERT_EQUAL(25, add1(20, 5, 1));
}

void test_add_2(void){
    TEST_ASSERT_EQUAL(-20, add2(-30, 10, 1));
}

void test_subtract_1(void){
    TEST_ASSERT_EQUAL(15, subtract1(20, 5, 2));
    TEST_ASSERT_EQUAL(-3, subtract1(2, 5, 2));
}

void test_subtract_2(void){
    TEST_ASSERT_EQUAL(-40, subtract2(-30, 10, 2));
    TEST_ASSERT_EQUAL(-8, subtract2(-2, 6, 2));
}
void test_multiply_1(void){
    TEST_ASSERT_EQUAL(6, multiply1(2, 3, 3));
}

void test_multiply_2(void){
    TEST_ASSERT_EQUAL(-18, multiply2(-3, 6, 4));
}

void test_divide_1(void){
    TEST_ASSERT_EQUAL(2, divide(6, 2, 4));
}

void test_factorial(void){
    TEST_ASSERT_EQUAL(120, factorial(5));
}

void test_factorial(void){
    TEST_ASSERT_EQUAL(1, factorial(0));
}

void test_factorial(void){
TEST_ASSERT_EQUAL("error! Factorial of negative number doesn't exist", factorial(-10));
}

void test_logarithmvoid test_subtract_2(void){
    TEST_ASSERT_EQUAL(-40, basic_operaion_test(-30, 10, 2));
    TEST_ASSERT_EQUAL(-8, basic_operaion_test(-2, 6, 2));
}ic(void){
    TEST_ASSERT_EQUAL(3, logarithmic(8,2));
}
void test_logarithmic(void){
    TEST_ASSERT_EQUAL("Invalid", logarithmic(-8,2));
}
void test_logarithmic(void){
    TEST_ASSERT_EQUAL("Invalid", logarithmic(8,-2));
}





































































































void test_interest_1(void){
    TEST_ASSERT_EQUAL(2250, multiply1(10000, 3, 7.5));
}

void test_interest_2(void){
    TEST_ASSERT_EQUAL(780, multiply2(5000, 2, 7.8));
}