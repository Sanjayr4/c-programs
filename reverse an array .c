//reverse an array 

#include<stdio.h>
int main() 
{
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i = 0;i<n ;i++)
    {
        scanf ("%d",&arr[i]);
    }
    for (int i = 0;i<n/2;i++) // we only need run the loop half; 
    { 
        // in the 1st half itself the array fully get reversed because of the swapping 
        
        int temp = arr[i]; // swapping the 1 element with the last element (n - i - 1);
        arr[i] = arr[n - i- 1]; // as the i increase the index of the array i increase;
        arr[n - i - 1] = temp;
    }
    for (int i = 0;i<n;i++)
    {
        printf ("%d ",arr[i]); // printing the array element
    }
    return 0;
}
