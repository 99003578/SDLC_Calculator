#include <exponential.h>
#include <math.h>
#include <stdio.h>

int main()
{
    float basenumber;
    int exponential, n;
    float result = 1;
    
    printf("Enter the Base number : ");
    scanf("%f", &basenumber);
    if(basenumber == 0)
    {
        printf("Invalid Operand\n");
        printf("Enter a valid Base number : ", &basenumber);
        scanf("%f", &basenumber);
    }
    
    printf("Enter the Exponential : ");
    scanf("%d", &exponential);

    while (exponential != 0)
    {
        result *= basenumber;
        --exponential;
    }
    printf("If you want to print the result press 1 or else press 2 : ");
    scanf("%d", &n);
    if (n == 1){
        printf("Solution = %.02lf", result);
        return "end";
    }

    else{
        return I;// Integreators place to be added

    }
    
}


