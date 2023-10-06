#include <stdio.h>
int main()
{
int n,currnum;
scanf ("%d",&n);
int numcount[100]={0};
for (int i=1;i<=n;i++)
{
scanf ("%d",&currnum);
numcount[currnnum]++;
}
int sum=0;
for (int j=1;j<99;j++)
{
if (numcount[j]==1)
{
sum+=j;
}
}
printf ("%d",sum);
}
