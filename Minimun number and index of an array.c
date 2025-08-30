#include<stdio.h>
 int main() 
 {
     int n ;
     scanf("%d",&n);
     int arr[n];
     int min = arr[0];
     int index = 0;
     for (int i = 0;i<n;i++)
     {
         scanf ("%d",&arr[i]);
         if (i == 0)
         {
             min = arr[i];
             index = 0;
         }
         else if (arr[i] < min)
         {
             min = arr[i];
             index = i;
         }
     }
     printf ("minimum = %d\nindex = %d",min,index);
 }
