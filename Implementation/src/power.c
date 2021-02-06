#include<power.h>
int calculate_power(float,float);
int power()
{
    float result;
    float base_num,exponential_num;
    scanf("%f%f",&base_num,&exponential_num);
    result = calculate_power(base_num,exponential_num);
    printf("enter 1 to continue or 2 to end");
    int k;
    scanf("%d", &k);
    if(k == 1){
        return result;
    }
    if(k ==2){
        print("%f", &result);
        return 0;
    }
}

int power1(float x, float y)
{
    float result;
    float base_num,exponential_num;
    base_num = x;
    exponential_num = y;
    result = calculate_power(base_num,exponential_num);
    printf("enter 1 to continue or 2 to end");
    int k;
    scanf("%d", &k);
    if(k == 1){
        return result;
    }
    if(k ==2){
        print("%f", &result);
        return 0;
    }
}


int calculate_power(float base_num,float exponential_num)
{
    float result=1;
    int count=1;
    while(count<=exponential_num)
    {
        result*=base_num;
        count++;
    }
    return result;
}