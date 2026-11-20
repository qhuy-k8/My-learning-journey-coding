#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b,BCNN;
	
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	printf("Nhap so nguyen b: ");
	scanf("%d", &b);
	
	BCNN = a * b;
	
	printf("BCNN cua %d va %d la: ",a,b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	
	BCNN = BCNN / a;
	
	printf("%d", BCNN);
	
	getch();
	return 0;
}
