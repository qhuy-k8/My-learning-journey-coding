#include <stdio.h>
#include <conio.h>

int main()
{
	int i,n,dem_soduong;
	float a,avg,tong,max,min,max_soduong,min_soduong,temp,so_duong;
	
	printf("Nhap vao so luong so thuc ban muon nhap: ");
	scanf("%d",&n);
	
	dem_soduong = 0;
	i = 0;
	tong = 0;
	avg = 0;
	
	
	while (i < n)
	{
		printf("Nhap so thuc a: ");
		scanf("%f", &a);
		
		if (i == 0)
		{
			max = a;
			min = a;
		}
		else
		{
			if (a > max)
				max = a;
			if (a < min)
			min = a;
		}
		
		if (a > 0)
		{
			so_duong = a;
			dem_soduong++;
			tong = tong + a;
			avg = tong / float(dem_soduong);
			
			if (dem_soduong==1)
			{
				max_soduong = a;
				min_soduong = a;
			}
			else
			{
				if (a > max_soduong)
					max_soduong = a;
				if (a < min_soduong)
					min_soduong = a;
			}
		}
		i++;
	}
	
	printf("So luong cac so thuc duong: %d \n", dem_soduong);
	printf("Tong cac so thuc duong vua nhap: %f \n",tong);
	printf("Trung binh cong cac so thuc duong vua nhap: %f \n",avg);
	printf("Max min cac so vua nhap: %f va %f \n",max,min);
	printf("Max min cac so thuc duong vua nhap: %f va %f \n",max_soduong,min_soduong);
	
	getch();
	return 0;
}
