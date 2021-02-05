#include<stdio.h>
void calculate_power(float,float);
void main()
{
    float base_num,exponential_num;
    scanf("%f%f",&base_num,&exponential_num);
    calculate_power(base_num,exponential_num);
}
void calculate_power(float base_num,float exponential_num)
{
    float result=1;
    int count=1;
    while(count<=exponential_num)
    {
        result*=base_num;
        count++;
    }
    printf("%f^%f=%f",base_num,exponential_num,result);
}