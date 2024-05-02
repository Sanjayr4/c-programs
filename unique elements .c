

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        int repeat = false;
        for (int j = 0;j < n;j++)
        {
            if (arr[i] == arr[j] && i!=j)
            {
                repeat = true;
            }
        }
        if (!repeat)
        {
            printf ("The repeated numbers are = %d \n",arr[i]);
        }
    }

    return 0;
}
