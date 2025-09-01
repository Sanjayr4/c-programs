// to find all posible divisor 

#include<stdio.h>
int main() 
{
    int n;   // get the number
    scanf ("%d",&n); 
    int arr[n];   //initialize the arr with size of the number = n;
    int count = 0;   // initialize the count as 0;
    for (int i = 1;i<=n;i++)   // itirate the loop from 1 to n;
    {
       if (n % i == 0)  // find wheather the number is divisible;
        {
            arr[count++] = i;   // here in the array if the divisible number found the count will increase , 
        }   // in the index of the count the the iterated i will store ;
    }
    for (int i = 0;i<count;i++)
    {
        printf ("%d , ",arr[i]);   //finally the array is got printed;
        
    }
    return 0;
}
