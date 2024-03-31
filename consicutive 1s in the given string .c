
#include <stdio.h>
#include<string.h>

int main()
{
   char s[1001];
   scanf ("%s",s);
   int l = strlen(s);
   int count = 0;
   int max = 0;
   for (int i=0;i<l;i++)
   {
       if (s[i] == '1')
       {
           count++;
           max = (max < count ? count:max);
       }
       else 
       {
           count = 0;
       }
   }
   printf ("%d",(max>1)?max:-1);

    return 0;
}
