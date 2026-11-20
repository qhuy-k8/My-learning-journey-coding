#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b;
	float x;
	printf("Nhap so a: ");
	scanf("%d" ,&a);
	printf("Nhap so b: ");
	scanf("%d" ,&b);
	
	x = ((float)(-b)) /a;
	
	printf("Ket qua cua phuong trinh la: %f \n", x);
	getch();
	return 0;
}
