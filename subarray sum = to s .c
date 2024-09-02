#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i = 0;i < n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    int s;
    scanf ("%d",&s);
    int count = 0;
    int current = arr[0];
    int right = 0;
    int left = 0;
   while(left <= right && right < n)
  //for (int i = 0;i < n;i++)
    {
        if (current < s)
        {
            right++;
            current += arr[right];
        }
        else if (current > s)
        {
            
                current -= arr[left];
                left++;
            
        }
        else
        {
            count++;
            right++;
            current += arr[right];
        }
    }
    printf ("%d",count);
}