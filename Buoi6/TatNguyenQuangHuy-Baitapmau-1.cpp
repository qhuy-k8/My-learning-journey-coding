#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b;
	
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen b: ");
	scanf("%d", &b);
	
	printf("UCLN cua %d va %d la: ", a,b);
	
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	
	printf("%d", a);
	
	getch();
	return 0;
}
