# include <stdio.h>
int main ()
{
   char a[101];
   scanf ("%s",a);
   int sum = 0;
   for (int i = 0 ; a[i]; i++)
   {
       sum = sum * 10 + a[i] - '0';
   }
   printf ("%d",sum);
}
