#include <stdio.h>
#include <conio.h>

int main()
{
	float toan,ly,hoa,van,anh,su,tb;
	
	printf("Nhap diem toan: ");
	scanf("%f", &toan);
	printf("Nhap diem ly: ");
	scanf("%f", &ly);
	printf("Nhap diem hoa: ");
	scanf("%f", &hoa);
	printf("Nhap diem van: ");
	scanf("%f", &van);
	printf("Nhap diem anh: ");
	scanf("%f", &anh);
	printf("Nhap diem su: ");
	scanf("%f", &su);
	
	tb = (toan+ly+hoa+van+anh+su) / 6; 
	
	if (tb >= 8 && toan,ly,hoa,van,anh,su > 6.5)
	{
		printf("Diem trung binh: %.2f. Loai gioi!",tb);
	}
	else if (tb >= 7 && toan,ly,hoa,van,anh,su > 5)
	{
		printf("Diem trung binh: %.2f. Loai kha!",tb);
	}
	else if (tb >= 5.5 && toan,ly,hoa,van,anh,su > 3.5)
	{
		printf("Diem trung binh: %.2f. Loai trung binh!",tb);
	}
	else
	{
		printf("Diem trung binh: %.2f. Loai yeu!",tb);
	}
	
	getch();
	return 0;
}
