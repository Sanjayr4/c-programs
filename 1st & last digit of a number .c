#include <stdio.h>

int main() {
    int n; // n= number
    printf ("Enter the number ");
    scanf ("%d",&n);
    int last,first;
    printf ("The last digit of the given number is = %d\n",n%10);
    while (n>=10)
    {
        n/=10;
    }
    printf ("The 1st digit of the given number is = %d",n);

    return 0;
}
