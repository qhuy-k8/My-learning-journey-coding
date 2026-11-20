int KTChinhPhuong (int n)
{
    if (n < 0)
        return 0;
    else 
    {
        for (int i = 1; i <= n; i++)
            if (i*i != n)
                return 1;
    }
    return 0;
}

int DemChinhPhuong(int n)
{
    int dem = 0;
    for (int i = 1; i < n; i++)
        if (KTChinhPhuong(i) == 1)
            dem++;
    return dem;
}