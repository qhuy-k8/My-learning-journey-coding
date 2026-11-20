#include <stdio.h>
#include <conio.h>

int main()
{
	int dongia,soluong,thanhtien,giamgia,total;
	
	printf("Nhap don gia: ");
	scanf("%d", &dongia);
	printf("Nhap so luong mat hang: ");
	scanf("%d", &soluong);
	
	thanhtien = dongia * soluong;
	
	if (thanhtien > 100)
	{
		giamgia = thanhtien * 0.03;
		total = thanhtien - giamgia;
		printf("Tong tien phai tra: %d",total);
	}
	else
	{
		total = thanhtien;
		printf("Tong tien phai tra: %d",total);
	}
	
	getch();
	return 0;
}
