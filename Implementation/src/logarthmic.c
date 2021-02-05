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
    return result;
}
else{
    return 0;
}
}
int logarthmic1(int x, int y){
     int num, base;
    int result;
    num = x;
    base = y;
    result = logN(num,base);
printf("Enter 1 to continue or else 2");
int r;
scanf("%d", &r);
if(r==1){
    return result;
}
else{
    return 0;
}
}
int logN(int num,int base)
{
    if(base < 0 || num==0)
      printf("Invalid");
    else
    {
      if(num<base)
           return 0;
      return 1 + logN(num/base,base);
    }
    return 0;
}