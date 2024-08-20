
#include <stdio.h>

int main()
{
   long int n;
   scanf ("%ld",&n);
   int count = 0;
   int arr[101];
   int h = 0;
   char ch = 'a';
   while (n)
   {
       int d = n % 10;
       arr[h++] = d;
       n /= 10;
   }
   for (int i = h-1;i>=0;i--)
   {
     if (arr[i] == 1)
     {
         count++;
     }
     else 
     {
         if (count > 0)
         {
             printf ("%c ",ch + count - 1);
             count = 0;
         }
     }
     
   }
   if (count > 0)
   {
       printf ("%c ",ch + count - 1);
   }
    return 0;
}