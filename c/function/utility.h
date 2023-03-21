int factors_count(int n)
{
    int fcount = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
            fcount++;
    }
    return fcount;
}