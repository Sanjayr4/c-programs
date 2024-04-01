#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int min = (n > m ? m : n);
    int gcd = 1;
    
    for (int i = 1; i <= min; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }
    }

    int lcm = (n * m) / gcd;
    printf("LCM of %d and %d = %d\n", n, m, lcm);
    
    return 0;
}
