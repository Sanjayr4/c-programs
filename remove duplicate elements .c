
#include <stdio.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    int rd = 0;
    for (int i=1;i<n;i++)
    {
        if (arr[rd] != arr[i] )
        {
            rd++;
            arr[rd] = arr[i];
        }
        
    }
    for (int i=0;i<=rd;i++)
    {
        printf ("%d ",arr[i]);
    }

    return 0;
}
