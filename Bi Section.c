#include<stdio.h>
#include<math.h>

float f(float x);

int main()
{

    float a,b,y,root1,root2,root3;
    do
    {
        printf("\nEnter the First Interval: ");
        scanf("%f",&a);

        printf("\nEnter the Second Interval: ");
        scanf("%f",&b);

        root1=f(a);
        root2=f(b);
    }

    while(root1*root2>0);
    printf("a\t\t\tb\t\tx=(a+b)/2 \t f(x)\n\n");
    do
    {
        root1=f(a);
        root2=f(b);
        y=(a+b)/2.0;
        root3=f(y);
        printf( "%.8f  ||    %.8f   ||   %.8f    ||  %.8f",a,b,y,root3);
        if(root1*root3<0)
            b=y;
        else
            a=y;
        printf("\n");
    }

    while(fabs(root3)>0.000001);
    printf("\nThe approx root is %.6f",y);
    printf("\n");
    return 0;
}


float f(float x )
{
    float f1;
    f1= 240*pow (x,4)+ 18*pow(x,3)+ 9*pow(x,2)-(221*x)-9;
    return(f1);
}


