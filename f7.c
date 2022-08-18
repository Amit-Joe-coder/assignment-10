/*
7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)
*/
#include <stdio.h>
int fact1(int);
int fact2(int);
int fact3(int);
int main()
{
    int y, n, r;
    scanf("%d %d", &n, &r);
    printf("n=%d \nr=%d\n", n, r);
    int z = fact1(n);
    int x = fact2(r);
    int k = n - r;
    if (k > 0)
    {
        y = fact3(k);
    }
    else
        printf("negative value of k");
    int p = z / (x * y);
    printf("%d", p);
}
int fact1(int n)
{
    int a = 1;
    for (n; n >= 1; n--)
    {
        a = a * n;
    }
    return a;
}
int fact2(int r)
{
    int a = 1;
    for (r; r >= 1; r--)
    {
        a = a * r;
    }
    return a;
}
int fact3(int k)
{
    int o = 1;
    for (k; k >= 1; k--)
        o = o * k;
    return o;
}
