
#include <stdio.h>

int main()
{
    int arr[] = {1,6,3,4,5};
    int arr1[] = {5,4,6,7,8};
    int n = sizeof (arr) /sizeof (arr[0]);
    int result[101],h = 0;
    for (int i = 0;i<n;i++)
    {
        for (int j = 0;j<n;j++)
        {
            if (arr[i] == arr1[j])
            {
                result[h++] = arr[i];
            }
        }
    }
    for (int i = 0;i<h;i++)
    {
        printf ("%d ",result[i]);
    }
    return 0;
}