#include <exponential.h>
int exponential()
{
    float basenumber;
    int exponential, n;
    float result = 1;
    
    printf("Enter the Base number : ");
    scanf("%f", &basenumber);
    if(basenumber == 0)
    {
        printf("Invalid Operand\n");
        printf("Enter a valid Base number : ");
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
        return 0;
    }

    else{
        return result;

    }
    
}

int exponential1(float x, int y)
{
    float basenumber = x;
    int exponential = y;
    int n;
    float result = 1;

    if(basenumber == 0)
    {
        printf("Invalid Operand\n");
        printf("Enter a valid Base number : ");
        scanf("%f", &basenumber);
    }

    while (exponential != 0)
    {
        result *= basenumber;
        --exponential;
    }
    printf("If you want to print the result press 1 or else press 2 : ");
    scanf("%d", &n);
    if (n == 1){
        printf("Solution = %.02lf", result);
        return 0;
    }

    else{
        return result;

    }
    
}

int exponential_test(float x, int y)
{
    float basenumber, result = 1;
    int exponential, n;
    basenumber = x;
    exponential = y;
    
    if(basenumber == 0){
        return 'Invalid Operand';
    }   
    else if(basenumber < 0){
        return 'Invalid Operand';
    }
    else{
        while (exponential != 0)
    {
        result *= basenumber;
        --exponential;
    }
    return result;
    }
}
        
    
    
