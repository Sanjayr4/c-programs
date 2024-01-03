#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,c=1,max=0;
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++)
    {
        if (arr[i]%2==0 && arr[i+1]%2==0)
        {
            c++;
        }
        else 
        {
            if (c>max)
            {
                max=c;
            }
            c=1;
        }
    }
    if (c>max)
    {
        printf ("%d ",c);
    }
    else 
    printf ("%d ",max);
}
