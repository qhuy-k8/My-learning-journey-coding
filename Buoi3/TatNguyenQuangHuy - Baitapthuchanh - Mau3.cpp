#include <stdio.h>
#include <conio.h>

int main()
{
	int nam;
	
	printf("Nhap nam can kiem tra: ");
	scanf("%d", &nam);
	
	if (nam%4 == 0 && nam%100 != 0 || nam%400 == 0)
	{
		printf("La nam nhuan!");
	}
	else
	{
		printf("La nam khong nhuan!");
	}
	
	getch();
	return 0;
}
