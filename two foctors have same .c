int getCommonFactorsCount(int a,int b)
{
    int count = 0;
    int small = (a>b)?b:a;
    for (int i=1;i<=small;i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            count++;
        }
    }
    return count;
}
Int main()
{
Int a,b;
scanf("%d",&a,&b);
Printf ("%d",getCommonFactorsCount(a,b));
}
