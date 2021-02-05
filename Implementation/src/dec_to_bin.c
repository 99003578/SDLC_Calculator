#include<dec_to_bin.h>
#include<stdio.h>
int main() 
{
    int a[10], number, i, j,m;
    printf("\n Please Enter the Number You want to Convert  :  ");
    scanf("%d",&number);
    if(number <0)
    {
        printf("Invalid input");
    }
    else
    {
    for(i = 0; number > 0; i++)
    {
        a[i] = number % 2;
        number = number / 2;
    }
    }
    printf("To print result press 1 else press 2 ");
    scanf("%d",&m);
    if(m==1)
    {
    printf("\n Binary Number of a Given Number =  ");
    for(j = i - 1; j >= 0; j--)  {
    printf(" %d ", a[j]);
    }
    }
    else{
        return I;
    }
    return 0;
}
