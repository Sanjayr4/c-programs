#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,place=1,binary=0;
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int temp = i;
        binary = 0;
        place = 1;
        while (temp!=0)
        {
            int rem = temp%2;
            temp/=2;
            binary = binary + (rem * place);
            place = place*10;
            
        }
        printf ("%d _ ",binary);
    }
}