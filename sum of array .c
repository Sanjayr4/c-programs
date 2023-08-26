#include<stdio.h>
int main()
{
int size,i,sum=0;
printf ("Enter the size of the array = ");
scanf ("%d",&size);
int arr[size];
for (i=0;i<size;i++)
{
scanf ("%d",&arr[i]);
}
for (i=0;i<size;i++)
{
sum+=arr[i];
}
printf ("The sum of the given numbers are = %d",sum);
return 0;
} 