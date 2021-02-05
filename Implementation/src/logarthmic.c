#include<logarthmic.h>
int logN(int num,int base);
int log(int x=3)
{
    int num, base;
    int result;
    if(x==3){
        printf("enter the number");
        scanf("%d",&num);
        printf("enter the base");
        scanf("%d",&base);
        result=logN(num,base);
        printf("%d",result);
        return 0;
    } 
else{
    num = x;
    scanf("%d",&base);
    result = logN(num,base);
    printf("%d",result);
    return 0;
} 
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