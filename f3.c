/*3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)
*/
#include <stdio.h>
int even(int);
int main()
{
    int x, y;
    printf("enter any number:");
    scanf("%d", &x);
    y = even(x);
    printf("%d", y);
}
int even(int a)
{
    if (a % 2)
    {
        return 0;
    }
    else
        return 1;
}
