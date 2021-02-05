#include<stdio.h>










int main(){
    int k, j=3;
    int r;
    while (j != 0){
        printf("Please select the number for the select function \n");
        printf("1 - basic operators(Add, Subtract, multiply, division)\n");
        printf("2 - average\n");
        printf("3 - Binary to Decimal conversion\n");
        printf("4 - Decimal to Binary conversion\n");
        printf("5 - Exponential operation\n");
        printf("6 - Factorial operation\n");
        printf("7 - Simple Interest Operation\n");
        printf("8 - Logarthmic Operation\n");
        printf("9 - Taking Power of the number");
        printf("10 - Trignometric functions");
    scanf("%d", &k);
        switch(k){
            case 1:
            r = basic_operations();
            break;
            case 2:
            r = average();
            break;
            case 3:
            r = bin_to_dec();
            break;
            case 4:
            r = dec_to_bin();
            break;
            case 5:
            r = exponential();
            break;
            case 6:
            r = factorial();
            break;
            case 7:
            r = interest();
            break;
            case 8:
            r = logarthmic();
            break;
            case 9:
            r = power();
            break;

     }
    }
}