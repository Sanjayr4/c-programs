#include <stdio.h>
// To print the smallest array element 
int main() {
    int n,smallest;
    printf ("Enter the  size of the array elements = ");
    scanf ("%d ",&n);
    int arr[n];
    for (int i=0;i<n;i++) // To get the array elements
    {
       
        scanf ("%d",&arr[i]); 
    }
    smallest=arr[0]; // condition for the small element in the array
    for (int i=0;i<n;i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
        
    }
    printf (" The smallest array in the array is = %d ",smallest);

    return 0;
}