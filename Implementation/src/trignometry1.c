#include<trignometry1.h>
#include<stdio.h>
#include<math.h>


 int trig(int angle)
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
int trig(int angle)  
{  
    float angle, radian;  
    const float PI = 3.14159;  
  
    printf("Enter angle \n");  
    scanf("%f",&angle);  
  
    radian = angle * (PI / 180.0);  
  
    printf("Sin(%f) = %f\n", angle, sin(radian));  
    printf("Cos(%f) = %f\n", angle, cos(radian));  
    printf("Tan(%f) = %f\n", angle, tan(radian)); 
    return 0;
}
int trignometry1_test(int x)
{
  float angle,radian; 
 const float PI = 3.14159;  
  x = angle;
 if((x==0)||(x==90){
        return 'error';
 }
 
 return radian = angle * (PI / 180.0);  

}
