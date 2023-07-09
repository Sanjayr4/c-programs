// to print the given number is prime or not
#include<stdio.h>
int main()
{
int num,count=0;
printf ("Enter the  number =");
scanf ("%d",&num);
if (num==0 || num==1)
{
printf ("NOT a prime number");
}
else 
{
for (int i=1;i<=num;i++)
{
if (num%i==0)
{
count++;
}
}
if (count==2)
{
printf ("The Given Number is Prime");
}
else 
{
printf ("The given number is not a prime number");
}
return 0;
}

