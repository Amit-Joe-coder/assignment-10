//5. Write a function to print first N odd natural numbers. (TSRN)//
#include<stdio.h>
void oddN_number(int);
int main()
{
    int x=1;
    oddN_number(x);
}
void oddN_number(int x)
{
    for ( x = 1; x <= 20; x=x+2)
    {
        printf("%d\n",x);
    }
    
}
