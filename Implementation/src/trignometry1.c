#include<trignometry1.h>
#include<stdio.h>
#include<math.h>



int trignometry1()
{
    float angle=0,trignometry;
    printf("enter the number");
    scanf("%f",&angle);
    trig(angle);
    printf("enter 1 for continuation else 2");
    int k;
    scanf("%d",&k);
    if(k=1){
        return 0;
    }
    else{
        return 0;

    }
}   
int trig(float angle)  
{  
     
    
  
    printf("Enter angle \n");  
    scanf("%f",&angle);  
  
   
  
    printf("Sin(%f) = %f\n", angle, sinf(angle));  
    printf("Cos(%f) = %f\n", angle, cosf(angle));  
    printf("Tan(%f) = %f\n", angle, tanf(angle)); 
    return 0;
}
int trignometry_test(float x)
{
  float angle; 

  angle=x;

  
 if((x==0)||(x==90)){
        return 'error';
 }
 
 return tan(angle); 

}
