//4. Write a function to print first N natural numbers (TSRN)//
#include<stdio.h>
void n_numbers(int);
int main()
{
int x=10;
n_numbers(x);
}
void n_numbers(int x)
{
    for (x  = 1; x <= 10; x++)
    {
        printf("%d\n",x);
    }
    
}
