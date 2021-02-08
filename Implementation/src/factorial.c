#include<factorial.h>
int factorial()
{   
signed int n, factorial;
printf("enter the number");
scanf("%d",&n);
factorial=fact2(n);
printf("enter 1 for continuation else 2");
int k;
scanf("%d", &k);
if(k=1){
    return factorial;
}
else{
    printf("factorial of %d = %d",n,factorial);
    return 0;
}
}

int factorial1(signed int x){
int n1, factorial;
    n1 = x;
    factorial=fact2(n1);
    printf("enter 1 for continuation else 2");
int k;
scanf("%d", &k);
if(k=1){
    return factorial;
}
else{
    printf("factorial of %d = %d",n1 ,factorial);
    return 0;
}

}

int fact2(int n)
{ 
    if(n<0)
  printf("error! Factorial of negative number doesn't exist");
  else {
    int i,f=1;

    for (i=1;i<=n;i++)
     {
    f=f*i;
      }
 return f;
  }  
}

int factorial_test(int x)
{int n =x;
    if(n<0){
  return -1;
    }
  else {
    int n2=fact2(n);
    return n2;
  }
}
