//to find the power value of a number
#include<stdio.h>
int main()
{
int num,power,result=1;
clrscr();
printf ("Enter the number and the power of the number");
scanf ("%d %d",&num,&power);
for (int i=1;i<=power;i++)
{
result=result*num;
}
printf ("%d",result);

getch();
return 0;
}
