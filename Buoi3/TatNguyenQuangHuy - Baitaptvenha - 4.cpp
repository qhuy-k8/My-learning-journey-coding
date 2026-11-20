#include <stdio.h>
#include <conio.h>

int main()
{
	int giovao,giora,total;
	
	printf("Nhap gio vao: ");
	scanf("%d", &giovao);
	printf("Nhap gio ra: ");
	scanf("%d", &giora);
	
	if (giovao == 0 && giora <= 10 || giovao >= 24)
	{
		printf("Ngoai gio lam viec!");
	}
	else if (giovao >= 10)
	{
		if (giora <= 17)
		{
			total = (giora - giovao) * 20000;
			printf("Tong tien phai tra: %d", total);
		}
		else if (giora >= 17)
		{
			total = 7 * 20000 + (giora - 7) * 45000;
			printf("Tong tien phai tra: %d", total);
		}
	}
	else if (giovao >= 17 && giora <= 24)
	{
		total = (giora - giovao) * 45000;
		printf("Tong tien phai tra: %d", total);
	}
	
	getch();
	return 0;
}
