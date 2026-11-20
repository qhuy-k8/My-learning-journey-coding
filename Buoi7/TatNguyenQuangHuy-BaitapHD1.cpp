#include <stdio.h>
#include <conio.h>

int UCLN(int a, int b)
{
	if (a == 0 || b == 0)
		return a + b;
	
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	
	return a;
}

int main()
{
	
	int a,b,kq;
	
	printf("Nhap a: "); scanf("%d", &a);
	printf("Nhap b: "); scanf("%d", &b);
	
	kq = UCLN(a,b);
	
	printf("UCLN cua %d va %d: %d ",a,b,kq);
	
	getch();
	return 0;
}
