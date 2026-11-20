#include <stdio.h>
#include <conio.h>

int KTSoHoanHao(int n)
{
	int tong = 0;
	int temp = n;
	
	if (n < 0)
		n = -n;
		
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			tong = tong + i;
			if (tong == temp)
				return 1;
		}
	}
			
	return 0;
}

int main()
{
	int n, kq;
	
	printf("Nhap so nguyen duong can kiem tra: ");
	scanf("%d",&n);
	
	kq = KTSoHoanHao(n);
	
	if (kq == 0)
		printf("%d khong la so hoan hao",n);
	else if (kq == 1)
		printf("%d la so hoan hao",n);
	
	getch();
	return 0;
}
