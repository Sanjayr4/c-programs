//Hashing the character 

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[26];
    scanf ("%s",ch);
    int n = strlen(ch);
    int hash[26] = {0};
    for (int i = 0;i<n;i++)
    {
        hash[ch[i] - 'a']++; // here ch[i] - 'a' = any character - asci number of an alpahbet;
        
        // which gives a number to store the value in the index of the given
    }
    for (int i = 0;i<26;i++)
    {
       if (hash[i] > 0)
       {
           printf("%d\n",hash[i]);
       }
    }
}
