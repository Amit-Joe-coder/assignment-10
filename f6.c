// 6. Write a function to calculate the factorial of a number. (TSRS)//
#include <stdio.h>
int fact(int);
int main()
{
    int z, x;
    printf("Enter any number to get factorial:");
    scanf("%d", &x);
    printf("%d", fact(x));
    return 0;
}
int fact(int i)
{
    int y = 1;
    for (i; i >= 1; i--)
    {
        y = y * i;
    }
    return y;
}
