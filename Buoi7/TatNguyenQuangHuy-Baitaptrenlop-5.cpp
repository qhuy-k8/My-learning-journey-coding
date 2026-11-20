#include <stdio.h>
#include <conio.h>

int KTNT(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	
	return 1;
}

int TongNT(int n)
{
    int sum = 0;
    for (int i = 2; i < n; i++)
        if (KTNT(i) == 1)
            sum = sum + i;
    
    return sum;
}

int main()
{
	int n,sum;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	sum = TongNT(n);
	
	printf("Tong cua cac so nguyen to nho hon %d la: %d",n,sum);
	
	getch();
	return 0;
}
