#include <stdio.h>
int main()
{
    int num, N;
    scanf("%d", &N);
    for(int ctr = 1; ctr < N; ctr++)
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
