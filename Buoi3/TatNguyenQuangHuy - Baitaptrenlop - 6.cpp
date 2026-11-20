#include <stdio.h>
#include <conio.h>

int main()
{
	int a,b;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	
	if (a % b == 0)
	{
		printf("a la boi so cua b");
	}
	else
	{
		printf("a khong la boi so cua b");
	}
	
	getch();
	return 0;
}
