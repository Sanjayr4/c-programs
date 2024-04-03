#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    int i = 0;
    int j = n-1;
    while (i<j)
    {
        printf ("%d ",arr[i]+arr[j]);
        i++;
        j--;
    }
    int mid = n/2;
    if (n%2!=0)
    {
        printf ("%d ",arr[mid]);
    }
}
/* the out put will be 
1st the question is to add 1 + n-1;
Then 2 + n-2;
For example 
Input => n = 5;
The array elements are => [1,2,3,4,5];
We should take the 1 and the last = 1+5 = 6;
Swell as on soo on = 2+4 = 6;
And the 3 in the middle ;
Therefore the out put is = [6,6,3];*/ 
