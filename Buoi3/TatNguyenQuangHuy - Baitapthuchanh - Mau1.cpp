#include <stdio.h>
#include <conio.h>

int main()
{
	float dtb;
	
	printf("Nhap diem trung binh cua sinh vien: ");
	scanf("%f", &dtb);
	
	if (dtb >= 4)
	{
		printf("Sinh vien da dau!");
	}
	else
	{
		printf("Sinh vien da rot!");
	}
	
	getch();
	return 0;
}
