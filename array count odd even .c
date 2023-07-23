#include <stdio.h>
int main()
{
int n,even=0,odd=0;
scanf ("%d",&n);
int arr[n];    // declaration of array size
for (int i=0;i<n;i++)  //Scanning the value in the index untill the n
{
scanf ("%d",&arr[i]);
}
for (int i=0;i<n ;i++)  // Asccesing the entered numbers
{
if (arr[i]%2==0)     // to take the even numbers 
{
even++;   
}
else 
{
odd++;
}
}
printf("Number of Even digits in the given array = %d\n",even);
printf ("Number of Odd digits in the given array = %d",odd); 
return 0;
}