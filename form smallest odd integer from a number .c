#include<stdio.h>
#include<conio.h>
int main()
{
int n,f=0,arr[100];
scanf("%d",&n);
while (n>0)
{
int d = n%10;
if (d%2!=0)
{
f=1;
arr[o]=d;
o++;
}
n/=10;
}
for (int i=0;i<o;i++)
{
For (int j=i+1;j<o;j++)
{
int temp = arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
printf ("%d",arr[i]);
}
}
else 
{
printf("-1");
}
return 0;
}