#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[101],s[101];
    int h=0;
    scanf (" %s",str);
    int l = strlen(str);
    int g=0;
    for (int i=l-1;i>=0;i--)
    {
        s[h]=str[i];
        h++;
    }
    int f=2;
    for (int i=0;i<h;i++)
    {
        if(i==g)// i don't want to print every character i just want to print only the specific char 
        {
        printf ("%c ",s[g]);
        g=g+f;
        f++;
        }
    }
}