#include<average_operations.h>
int average1(int x)
int average()
{
    int i,m,n;
    float sum=0,a[100],c;
    back:printf("Enter the Number of Elemnts(Upto 100)\n\n");
    scanf("%d",&n);
    if((n>100)||(n<0)){
    printf("Enter Number of elements between 1 to 100!!!\n");
    goto back;
    }
    printf("Enter the Numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    sum+=a[i];
    }
    c=sum/n;
    }
    back:printf("If you want to display result press 1 or else to continue further calculation press 2\n");
    scanf("%d",&m);
    if(m==1)
    {
    printf("Average is %.3f\n",c);
    return 0;
    }
    else if(m==2)
    {
    printf("GO TO MAIN");
    return 0;
    }
    else
    return 0;  
}
    int average1()
    {
    printf("Enter the Number of Elemnts(Upto 100)\n\n");
    scanf("%d",&n);
      if((n>100)||(n<0)){
    printf("Enter Number of Elements between 1 to 100!!!\n");
    goto back1;
    }
    printf("Enter the Numbers\n");
    a[0]=x;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        sum+=a[i];
    }
    c=sum/(n+1);
    }
    goto back2;
}
