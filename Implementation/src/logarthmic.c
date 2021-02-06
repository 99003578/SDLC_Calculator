#include<logarthmic.h>


int logarthmic(){
    int num, base;
    int result;

        printf("enter the number");
        scanf("%d",&num);
        printf("enter the base");
        scanf("%d",&base);
        result=logN(num,base);
        printf("Enter 1 to continue or else 2");
        int r2;
        scanf("%d", &r2);
    if(r==1){
    printf("%d",r2);
    }
    else
    return r2;
}
int log2(int x,int y){
    int num = x;
    int base=y;
    int r1=logN(num,base); 
    return r1; 
}


int logN(int num,int base)
{
    if(num==0 || num<base)
      printf("Invalid");
    else
    {
           return 1 + logN(num/base,base);
    }
    return 0;
}
int logarthmic_test(int num, int base){
        if(num<base || num==0){
            return 'Invalid';
        }
        else
        {
           int r=1 + logN(num/base,base);
            return r;
        }
        
    }

