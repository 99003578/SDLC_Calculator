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
void test_factorial(void);
void test_logarithmic(void);
void test_bin_to_dec(void);
void test_interest(void);
void test_power(void);
void test_trignometry(void);
void test_average(void);
void test_exponential(void);



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
    RUN_TEST(test_logarithmic);
    RUN_TEST(test_bin_to_dec);
  
    RUN_TEST(test_interest);
    RUN_TEST(test_power);
    RUN_TEST(test_trignometry);
    RUN_TEST(test_average);
    RUN_TEST(test_exponential);
   
   

    return UNITY_END();
}


void test_add_1(void){
    TEST_ASSERT_EQUAL(25, basic_operation_test(20, 5, 1));
}

void test_add_2(void){

    TEST_ASSERT_EQUAL(-20, add2(-30, 10, 1));

    TEST_ASSERT_EQUAL(-20, basic_operation_test(-30, 10, 1));

}

void test_subtract_1(void){
    TEST_ASSERT_EQUAL(15, basic_operation_test(20, 5, 2));
    TEST_ASSERT_EQUAL(-3, basic_operation_test(2, 5, 2));
}

void test_subtract_2(void){
    TEST_ASSERT_EQUAL(-40, basic_operation_test(-30, 10, 2));
    TEST_ASSERT_EQUAL(-8, basic_operation_test(-2, 6, 2));
}
void test_multiply_1(void){
    TEST_ASSERT_EQUAL(6, basic_operation_test(2, 3, 3));
}

void test_multiply_2(void){
    TEST_ASSERT_EQUAL(-18, basic_operation_test(-3, 6, 4));
}

void test_divide_1(void){
    TEST_ASSERT_EQUAL(2, basic_operation_test(6, 2, 4));
}

void test_factorial(void){
    TEST_ASSERT_EQUAL(120, factorial_test(5));
}

void test_factorial(void){
    TEST_ASSERT_EQUAL(1, factorial_test(0));
}

void test_factorial(void){
TEST_ASSERT_EQUAL("error! Factorial of negative number doesn't exist", factorial_test(-10));
}

void test_logarithmic(void){
    TEST_ASSERT_EQUAL("Invalid", logarithmic_test(-8,2));
}

void test_logarithmic(void){
    TEST_ASSERT_EQUAL("Invalid", logarithmic_test(8,-2));
}

void test_logarithmic(void){
    TEST_ASSERT_EQUAL("Invalid", logarithmic_test(8,-2));
}
void test_power(void){
    TEST_ASSERT_EQUAL(8, calculate_power(3,1));
}
void test_power(void){
    TEST_ASSERT_EQUAL(1, calculate_power(0,8));
}
void test_trignometry(void){
    TEST_ASSERT_EQUAL(0.707, trignometry_test(45));
}
void test_trignometry(void){
    TEST_ASSERT_EQUAL('error', trignometry_test(90));
}
void test_trignometry(void){
    TEST_ASSERT_EQUAL(0, trignometry_test(0));
}
void test_trignometry(void){
    TEST_ASSERT_EQUAL(0, trignometry_test(180));
}
























































void test_interest_1(void){
    TEST_ASSERT_EQUAL(2250, interest_test(10000, 3, 7.5));
}

void test_interest_2(void){
    TEST_ASSERT_EQUAL(780, multiply2(5000, 2, 7.8));
}

void test_bin_to_dec(void){
    TEST_ASSERT_EQUAL(7, bin_to_dec_test(111));
}

void test_exponential(void){
    TEST_ASSERT_EQUAL('Invalid Operand', exponential_test(0,2));
}
