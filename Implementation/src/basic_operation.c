#include<basic_operation.h>

int basic_operation(){
    float  j, l;
    int k, m;
    printf("Choose your operation\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multipilcation\n");
    printf("4 - Division\n");
    scanf("%d", &k);

    switch(k){
        int result;
        case 1:
        printf("Please enter the numbers\n");
        scanf("%f %f", &j, &l);
     result = j + l;
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
     result = j - l;
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
     result = j * l;
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
        back:
        if(l == 0){
            printf("Denominator cant be zero, please enter again");
            scanf("%f", &l);
            goto back;
        }
        else{
        printf("Please enter the numbers\n");
        scanf("%d %d", &j, &l);
        result = j / l;
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
}


int basic_operation1(int x, int y){
    float j, l;
    int k;
    j = x;
    l = y;
    int m;
    printf("Choose your operation\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multipilcation\n");
    printf("4 - Division\n");
    scanf("%d", &k);

    switch(k){
        int result;
        case 1:
        result = j + l;
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
        result = j - l;
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
        result = j * l;
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
        back:
        if(l == 0){
            printf("Denominator cant be zero, please enter again");
            scanf("%d", &l);
            goto back;
        }
        else{
        result = j / l;
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
}
    int basic_operation_test(int j, int l, int k){
        switch(k){
        int result;
        case 1:
        result = j + l;
        return result;
        break;
        case 2:
        result = j - l;
        return result;
        break;
        case 3:
        result = j * l;
        return result;
        break;
        case 4:
        back:
        if(l == 0){
            
            return 'Denominator cant be zero, please enter again';
            goto back;
        }
        else{
        result = j / l;
       
        break;
    }
    }
    
}
