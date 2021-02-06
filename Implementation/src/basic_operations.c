#include<basic_operations.h>

int basic_operations(){
    float  j, l;
    int k, m;
    printf("Choose your operation\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multipilcation\n");
    printf("4 - Division\n");
    scanf("%d", &k);

    switch(k){
        case 1:
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        int result = j + l;
        printf("Answer is %.0f", &result);
        printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
        break;
        case 2:
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        int result = j - l;
        printf("Answer is %.0f", &result);
        printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
        break;
        case 3:
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        int result = j * l;
        printf("Answer is %.0f", &result);
        printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
        break;
        case 4:
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        int result = j / l;
        printf("Answer is %.0f", &result);
        printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
        break;
    }
    
}


int basic_operation1(int x, int y){
    float j, l;
    int k;
    x = j;
    y = l;
    int m;
    printf("Choose your operation\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multipilcation\n");
    printf("4 - Division\n");
    scanf("%d", &k);

    switch(k){
        case 1:
        int result = j + l;
        printf("Answer is %.0f", &result);
        printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
        break;
        case 2:
        int result = j - l;
        printf("Answer is %.0f", &result);
        printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
        break;
        case 3:
        int result = j * l;
        printf("Answer is %.0f", &result);
        printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
        break;
        case 4:
        int result = j / l;
        printf("Answer is %.0f", &result);
        printf("Enter 1 if you want to continue else 2");
    scanf("%d", &m);
    if(m == 1){
        return result;
    }
    if(m == 2){
        return 0;
    }
        break;
    }
    
}