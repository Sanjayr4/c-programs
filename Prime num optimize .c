#include<stdio.h>
#include<stdlib.h>

int prime (int n)
{
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return i;
}
int main()
{
    int n;
    scanf ("%d",&n);
    for (int i = 1 ; i<= n; i++)
    {
        if (prime(i))
        {
            printf ("%d ",i);
        }
    }
}