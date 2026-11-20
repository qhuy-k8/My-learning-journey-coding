#include <stdio.h>
#include <conio.h>
int main () 
{
	int a, b;
	float c;
	
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen b: ");
	scanf("%d", &b);
	
	c = (float) a / b;
	
	printf("Thuong cua a chia cho b: %f \n", c);
	printf("Lam tron thuong: %d \n", int(c + 0.5));
	printf("In thuong voi mot so thap phan %.1f \n", c);
	
	getch();
	return 0;
}
