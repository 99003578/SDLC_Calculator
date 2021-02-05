#include<basic_operations.h>

int basic_operations(){
    float k, j, l;
    int m;
    printf("Choose your operation\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multipilcation\n");
    printf("4 - Division\n");
    scanf("%f", &k);

    switch(k){
        case 1:
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        int result = j + l;
        printf("Answer is %.0f", &result);
        break;
        case 2:
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        int result = j - l;
        printf("Answer is %.0f", &result);
        break;
        case 3:
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        int result = j * l;
        printf("Answer is %.0f", &result);
        break;
        case 4:
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        int result = j / l;
        printf("Answer is %.0f", &result);
        break;
    }
    printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
}