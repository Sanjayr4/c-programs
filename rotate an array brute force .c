

#include <stdio.h>

int main()
{
   int n;
   scanf ("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++)
   {
       scanf ("%d",&arr[i]);
   }
   int temp = arr[0];   //storing the 1st element in the temp ;
   for (int i=1;i<n;i++)
   {
       arr[i-1] = arr[i];  // swaping  (or) shifting the array elements to i-1 ;
   }
   arr[n-1] = temp; // replacing the last element to temp (arr[0]);
   for (int i=0;i<n;i++)
   {
       printf ("%d ",arr[i]);
   }

    return 0;
}
