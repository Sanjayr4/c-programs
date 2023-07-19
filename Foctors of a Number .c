#include <stdio.h>

// to find the foctors of a digit
int main() {
   int num,count=0;

printf ("Enter the number =");
scanf ("%d",&num);
for (int i=1;i<=num;i++)// i is the number untill the entered nnumber
{
if (num%i==0)
{
    printf ("the foctors are = %d\n",i);
count++;
}
}
printf ("%d",count);

return 0;
   
}