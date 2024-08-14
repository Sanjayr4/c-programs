

#include <stdio.h>

int main()
{
   int n;
   scanf ("%d",&n);
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       scanf ("%d",&arr[i]);
   }
   int rsum = 0;
   int lsum = 0;
   int eql;
   for (int i = 0; i < n; i++)
   {
       rsum += arr[i];
   }
   for (int i = 0; i < n; i++)
   {
       rsum -= arr[i];
       if (lsum == rsum)
       {
          printf ("the ans is the index of = %d",i);
          return 0;
       }
       lsum += arr[i];
   }
   printf ("No equilibrium index is found out");
    return -1;
}