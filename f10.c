/*10. Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/
#include <stdio.h>
void prmfact(int);
int main()
{
    int x;
    printf("enter any number: ");
    scanf("%d", &x);
    prmfact(x);
}
void prmfact(int x)
{
    int s = 2;
    while (x > 1)
    {
        if (x % s==0 )
        {
            printf(" %d", s);
            x=x/s;
            continue;
        }
        
        s++;
    }
}
