#include <stdio.h>
#include <conio.h>

int main()
{
	float tieuluan,gk,ck,tb;
	
	printf("Nhap diem tieu luan: ");
	scanf("%f", &tieuluan);
	printf("Nhap diem giua ky: ");
	scanf("%f", &gk);
	printf("Nhap diem cuoi ky: ");
	scanf("%f", &ck);
	
	tb = tieuluan * 0.2 + gk * 0.3 + ck * 0.5; 
	
	if (tb >= 8.5)
	{
		printf("Diem A!");
	}
	else if (tb >= 7)
	{
		printf("Diem B!");
	}
	else if (tb >= 5.5)
	{
		printf("Diem C!");
	}
	else if (tb >= 4)
	{
		printf("Diem D!");
	}
	
	getch();
	return 0;
}
