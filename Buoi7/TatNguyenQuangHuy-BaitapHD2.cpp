#include <stdio.h>
#include <conio.h>

int NT(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	
	return 1;
}

int main()
{
	int n,kq;
	printf("Nhap n: "); scanf("%d", &n);
	
	kq = NT(n);
	
	if (kq == 0)
		printf("%d khong la so nguyen to!", n);
	else
		printf("%d la so nguyen to!", n);
		
	getch();
	return 0;
}
