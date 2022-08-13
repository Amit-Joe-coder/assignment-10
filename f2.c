// 2. Write a function to calculate simple interest. (TSRS)/
#include <stdio.h>
float si(float, float, float);
void main()
{
    float a, b, c, sol;
    printf("Enter three value:");
    scanf("%f %f %f", &a, &b, &c);
    sol = si(a, b, c);
    printf("%f", sol);
}
float si(float p, float r, float t)
{
    
    return p*(r/100)*t;
}
