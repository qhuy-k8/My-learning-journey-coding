#include <stdio.h>
#include <conio.h>
#include <math.h>

float DTTamgiac(int a, int b, int c)
{
	if (a + b <= c || b + c <= a || a + c <= b)
		return 0;
	
	float p = float(a + b + c) / 2;
	float S = sqrt(p*(p-a)*(p-b)*(p-c));
	
	return S;
}

int main()
{
	int a,b,c;
	float kq;
	
	printf("Nhap canh a: "); scanf("%d", &a);
	printf("Nhap canh b: "); scanf("%d", &b);
	printf("Nhap canh c: "); scanf("%d", &c);
	kq = DTTamgiac(a,b,c);
	
	if (kq == 0)
		printf("Tam giac khong hop le. Vui long nhap lai canh tam giac!");
	else 
		printf("Dien tich tam giac la: %.2f", kq);
	
	
	getch();
	return 0;
}
