#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	
	printf("Nhap so can kiem tra: ");
	scanf("%d", &a);
	
	if (a > 0)
	{
		printf("So duong");
	}
	else
	{
		printf("So am");
	}
	
	getch();
	return 0;
}
