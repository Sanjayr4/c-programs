#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    scanf ("%d%d",&a,&b);
    int arr[1001],h=0;
    for (int i=a;i<=b;i++)
    {
        arr[h]=i;
        h++;
    }
    for (int i=0;i<h;i++)
    printf ("%d ",arr[i]);
}