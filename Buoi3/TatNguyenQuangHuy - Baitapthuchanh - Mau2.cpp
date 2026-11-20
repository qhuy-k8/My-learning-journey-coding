#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	
	printf("Nhap so nguyen can kiem tra: ");
	scanf("%d", &a);
	
	if (a%2 == 0)
	{
		printf("La so chan!");
	}
	else
	{
		printf("La so le!");
	}
	
	getch();
	return 0;
}
