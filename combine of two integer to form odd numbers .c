#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, o = 0, t = 0, f = 0;
    int arr[1001], brr[1001];
    scanf ("%d %d", &a, &b);

    while (a > 0)
    {
        int d = a % 10;
        arr[o] = d;
        o++;
        a /= 10;
    }

    while (b > 0)
    {
        int d = b % 10;
        brr[t] = d;
        t++;
        b /= 10;
    }

    int m1 = 0;
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if ((arr[i] * 10 + brr[j]) % 2 != 0)
            {
                if ((arr[i] * 10 + brr[j]) > m1)
                {
                    m1 = (arr[i] * 10 + brr[j]);
                    f = 1;
                }
            }
        }
    }

    int m2 = 0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < o; j++)
        {
            if ((brr[i] * 10 + arr[j]) % 2 != 0)
            {
                if ((brr[i] * 10 + arr[j]) > m2)
                {
                    m2 = (brr[i] * 10 + arr[j]);
                    f = 1;
                }
            }
        }
    }

    if (f == 1)
        printf("%d", m1 > m2 ? m1 : m2);
    else
        printf("-1");
    
    return 0;
}
