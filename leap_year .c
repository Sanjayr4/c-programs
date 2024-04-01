#include<stdio.h>
#include<stdlib.h>
int leap (int y)
{
    if (y%400 == 0 || (y%100 != 0 && y%4 == 0))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    scanf ("%d ",&n);
    printf (leap(n)?"Leap Year":"Not a Leap Year");
}