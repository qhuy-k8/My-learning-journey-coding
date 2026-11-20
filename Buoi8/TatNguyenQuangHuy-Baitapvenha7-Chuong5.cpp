#include <stdio.h>
#include <conio.h>

int KTNT (int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	
	return 1;
}

void XuatNT (int soluong)
{
	int dem = 0;
	int i = 2;
	
	while (dem < soluong)
	{
		if (KTNT(i) == 1)
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}
		
}

int main()
{
	int soluong;
	
	printf("Nhap so luong so nguyen to ban muon xuat: ");
	scanf("%d",&soluong);
	
	XuatNT(soluong);
	
	getch();
	return 0;
}
