#include <stdio.h>
#include <conio.h>

int main () 
{
	float a, b, C, S;
	printf("Nhap chieu dai va chieu rong: ");
	scanf("%f %f", &a, &b);
	
	C = (a+b)*2;
	S = a*b;
	printf("Chu vi va dien tich cua hinh chu nhat: C = %f; S = %f", C, S);
	
	getch();
	return 0;
}
