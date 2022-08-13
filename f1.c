/*1. Write a function to calculate the area of a circle. (TSRS)*/
#include<stdio.h>
#include<conio.h>
float area(float);
int main()
{
    float r,x;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    x=area(r);
    printf("area is %f",x);
}
float area(float r)
{
 float ar=3.14*r*r;
 return ar;
}
