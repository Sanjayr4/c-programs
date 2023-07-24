#include <stdio.h>
int main()
{
    int num, N;
    scanf("%d", &N);
    for(int i = 1; i < N; i++) // A for loop to print the number of digits we want to enter
    {
        scanf("%d",&num);
        if(num==10)
        {
            break;
        }
        printf("%d\n",num);
    }
    return 0;
}
