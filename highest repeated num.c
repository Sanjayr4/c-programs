// To print the highest repeated number from the given array;

#include<stdio.h>
void sort (int *arr,int n) // bubble sort technique;
{
    for (int i = 0;i<n;i++)
    {
        for (int j = i+1;j<n;j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i = 0;i<n;i++)
    {
        scanf ("%d",&arr[i]);
    }
    sort(arr,n);
    int count = 0;
    int result = 0;
    int max = 0;
    for (int i = 1;i<n;i++)
    {
        if (arr[i] == arr[i-1]) // i and i - 1 == count++; (ex: arr[1] == arr[0] == count++)
        {
            count++;
        }
        else 
        {
            count = 1; // id not count = 1;
        }
        if (count > max) 
        {
            max = count;
            result = arr[i];
        }
    }
    printf ("The answer is = %d ",result);
}
