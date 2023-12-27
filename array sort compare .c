#include<sdtio.h>
#include<conio.h>
Int main()
{
    int n;
    scanf ("%d",&n);
    int arr[n],arr1[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr1[i]);
    }
    for (int i=0;i<=n-1;i++)
    {
        for (int j=i+1;j<=n-1;j++)
        {
            if (arr[i]>arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            if (arr1[i]>arr1[j])
            {
                int temp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = temp;
            }
        }
        if (arr[i]>arr1[i])
        {
            printf ("NO");
            return 0;
        }
    }
    printf ("YES");
return 0;
}