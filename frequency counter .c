

#include <stdio.h>
#include <string.h>

int main()
{
   char arr[101];
   scanf ("%s",arr);
   int n = strlen(arr); 
   int counted[101] ={0}; // creating an array of size 101 with all the elements as 0;
   for (int i = 0; arr[i]; i++)
   {
       if (counted[i]) // checking the index is true = 1; if = 1 continue;
       {
           continue;
       }
       int count = 0;
       for (int j = i+1; arr[j]; j++)
       {
           if (arr[i] == arr[j])
           {
               count++;
               counted[j] = 1; // marking the index as 1 = which has the occurance of the same character in the array  
           }
       }
      
       printf ("%c == %d\n",arr[i],count);
   }

    return 0;
}
