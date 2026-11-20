#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	
	if (a > b)
	{
		printf("Lon hon");
	}
	if (a < b)
	{
		printf("Nho hon");
	}
	else
	{
		printf("Bang nhau");
	}
	
	getch();
	return 0;
}
