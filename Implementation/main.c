#include<stdio.h>










int main(){
    int k, j=3;
    int r;
    int r2;
   
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
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 2:
            r = average();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 3:
            r = bin_to_dec();
           if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 4:
            r = dec_to_bin();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 5:
            r = exponential();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 6:
            r = factorial();
           if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 7:
            r = interest();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 8:
            r = logarthmic();
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 9:
            r = power();
           if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 10:
            trignometry();
            break;

     }

    front: 
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

         scanf("%d", &k);
        switch(k){
            case 1:
            printf("enter the second number");
            scanf("%d", &r2)
            r = basic_operations1(r, r2);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 2:
            r = average1(r);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 5:
            printf("Enter the exponential:");
            scanf("%d", &r2);
            r = exponential1(r, r2);
            if(r==0){
                break;
            }
            else{
                goto front;
            }
            case 6:
            r = factorial();
           if(r>0){
                break;
            }
            else{
                goto front;
            }
            case 7:
            r = interest();
            if(r>0){
                break;
            }
            else{
                goto front;
            }
            case 8:
            r = logarthmic();
            if(r>0){
                break;
            }
            else{
                goto front;
            }
            case 9:
            r = power();
           if(r>0){
                break;
            }
            else{
                goto front;
            }





    }