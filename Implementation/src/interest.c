#include<interest.h>

int interest2(int x, float y, float z)
{
    int P,n;
    float T,R,I;
    x = P;
    y = R;
    z = T;

    I = ((P*T*R)/100);
printf("If you want to print the result press 1 or else press 2:");
    scanf("%d",&n);
    if(n == 1)
    {
       printf("Simple interest = %0.2f",I);
       return 'end';
    }
     else{
        return I;


    }
int interest(){
    printf("Enter the principle, time in years and rate of interest:\n");
    scanf("%d%f%f",&P,&T,&R);
    I = (P*T*R)/100;
    }
    
    printf("If you want to print the result press 1 or else press 2:");
    scanf("%d",&n);
    if(n == 1)
    {
       printf("Simple interest = %0.2f",I);
       return 'end';
    }
     else{
        return I;
     }
    return 0;
}

int interest_test(int x, float y, float z)
{
    int P,n;
    float T,R,I;
    x = P;
    y = R;
    z = T;


    return  I = ((P*T*R)/100);
}
