int KTNT(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	
	return 1;
}

long TongNT(int n)
{
    long sum = 0;
    for (int i = 2; i < n; i++)
        if (KTNT(i) == 1)
            sum = sum + i;
    
    return sum;
}