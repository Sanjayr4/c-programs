
#include <stdio.h>

int main()
{
   int n;
   scanf ("%d",&n);
   int sum = 0;
   while (n)
   {
       int d = n % 10;
       sum += d;
       n /= 10;
   }
   
   while( sum >= 10 )
   {
       int temp = sum;
       sum = 0;
       while (temp)
       {
           int d = temp % 10;
           sum += d;
           temp /= 10;
       }
   }
   printf ("%d ",sum);

    return 0;
}