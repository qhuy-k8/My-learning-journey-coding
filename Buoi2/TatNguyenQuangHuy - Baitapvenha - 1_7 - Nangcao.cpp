#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b;
	printf("Nhap so a: ");
	scanf("%d" ,&a);
	printf("Nhap so b: ");
	scanf("%d" ,&b);
	
	a == 0 
	? b == 0 ? printf("Phuong trinh vo so nghiem \n ") : printf("Phuong trinh vo nghiem! \n")

	:printf("Ket qua la: x = %f \n", (float(-b))/a);
	
	getch();
	return 0;
}
