#include <stdio.h>
#include <conio.h>

int main() 
{
	
	int a,b,c,max,min;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Nhap so thu ba: ");
	scanf("%d", &c);
	
	max = a;
	if (max < b)
	{
		max = b;
	}
	else if (max < c)
	{
		max = c;
	}
	
	min = b;
	if (min > a)
	{
		min = a;
	}
	else if (min > c)
	{
		min = c;
	}
	
	printf("\n");
	printf("So lon nhat la: %d \n", max);
	printf("So nho nhat la: %d", min);
	
	getch();
	return 0;
}
