#include <stdio.h>
#include <conio.h>

int main()
{
	int kW,total;
	
	const int L1 = 100;
	const int L2 = 150;
	const int L3 = 200;
	const int L4 = 300;
	
	printf("Nhap luong dien da su dung: ");
	scanf("%d", &kW);
	
	if (kW < 0)
	{
		printf("Vui long nhap lai!");
	}
	else if (kW <= L1)
	{
		total = kW * 5;
		printf("Tong tien phai tra: %d$", total);
	}
	else if (kW > L1)
	{
		if (kW <= L2)
		{
			total = 100 * 5 + (kW - 100) * 7;
			printf("Tong tien phai tra: %d$", total);
		}
		else if (kW > L2 && kW <= L3)
		{
			total = 100 * 5 + 50 * 7 + (kW - 150) * 10;
			printf("Tong tien phai tra: %d$", total);
		}
		else if (kW > L2 && kW > L3)
		{
			if (kW <= L4)
			{
				total = 100 * 5 + 50 * 7 + 50 * 10 + (kW - 200) * 15;
				printf("Tong tien phai tra: %d$", total);
			}
			else
			{
				total = 100 * 5 + 50 * 7 + 50 * 10 + 100 * 15 + (kW - 300) * 20;
				printf("Tong tien phai tra: %d$", total);
			}
		}
	}
	
	getch();
	return 0;
}
