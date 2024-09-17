#include <stdio.h>

int main()
{
   int n;
   scanf ("%d",&n);
// >> - right swift;
// << - left swift;

// if both the right and left swift is equal then it is even else odd;

   if (n == (n >> 1) << 1)
   {
       printf ("even");
   }
   else 
   {
       printf ("odd");
   }
    return 0;
}