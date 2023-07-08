#include<stdio.h>
int main 
{
int n;
scanf ("%d",&n);
while (n>0)
{
sum+=n%10;
n/=10;
}
printf ("%d",sum);
rteurn 0;
}