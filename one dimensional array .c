#include<stdio.h>
int main()
{
    // a program to print an onedimensional array 
int n;
scanf ("%d",&n);
int arr[n];
for (int i=0;i<n;i++)
{
scanf ("%d",&arr[i]);
}
printf ("[");
for (int i=0;i<n;i++)
{
printf ("%d ",arr[i]);
}
printf ("]");
return 0;
}
