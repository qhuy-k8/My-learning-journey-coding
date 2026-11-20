#include <stdio.h>
#include <conio.h>

int main()
{
	int a,dem,dem_nguyento,nguyento,avg,sum,i,max,min, temp;
	
	dem = 0;
	sum = 0;
	dem_nguyento = 0;
	
	while (a != 0)
	{
		printf("Nhap vao so nguyen duong a: ");
		scanf("%d", &a);
		
		if (a < 0)
		{
			printf("Vui long nhap so nguyen duong! \n");
		}
		else
			{
				for (int i = 1; i <= a; i++)
					if (a % i == 0)
						{
							
						}

				if (a % 2 == 0 && a != 0)
					{
						temp = a;
						dem = dem + 1;
						sum = sum + a;
						avg = sum / dem;
						
						if (max < temp)
							max = temp;
						else
							min = a;
					}	
			}	
	}
	
	printf("So so chan co trong day: %d \n", dem);
	printf("Tong cac so chan: %d \n", sum);
	printf("Trung binh cong cac so chan: %d \n", avg);
	printf("So chan lon nhat va nho nhat: %d va %d \n", max, min);
	printf("So luong cac so nguyen to co trong day: %d", dem_nguyento);
	getch();
	return 0;
}
