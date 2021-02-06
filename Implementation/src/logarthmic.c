#include<logarthmic.h>
int logN(int num,int base);

int logarthmic(){
    int num, base;
    int result;

        printf("enter the number");
        scanf("%d",&num);
        printf("enter the base");
        scanf("%d",&base);
        result=logN(num,base);
        printf("Enter 1 to continue or else 2");
        int r;
        scanf("%d", &r);
    if(r==1){
    printf("%d",result);
    }
    else
    return result;
}
int log2(int x,int y){
    int num = x;
    int base=y;
    int result=logN(num,base); 
    return result; 
}


int logN(int num,int base)
{
    if(base < 0 || num==0 || num<base)
      printf("Invalid");
    else
    {
           return 1 + logN(num/base,base);
    }
    return 0;
}
int logarthmic_test(int num, int base){
    int result;
        if(num<base || base<0 || num==0){
            return 'Invalid';
        }
        else
        {
            result=1 + logN(num/base,base);
            return result;
        }
        
    }

