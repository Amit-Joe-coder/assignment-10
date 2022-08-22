/*9. Write a function to check whether a given number contains a given digit or not.
(TSRS)*/
#include <stdio.h>
#include <stdbool.h>
int digit(char);
int main()
{
    int s, x;
    printf("enter any number:");
    scanf("%d", &x);
    if (digit(x) == 1)
    {
        printf("given number %d contains digits", x);
        return 0;
    }
    printf("given number contains No digits");
}
int digit(char n)
{
    if (n > 0)
    {
        while (n % 10)
        {
            return true;
            n / 10;
        }
    }
    return false;
}
