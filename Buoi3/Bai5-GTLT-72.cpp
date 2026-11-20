#include <stdio.h>
#include <conio.h>

int main() 
{
	
	int a,b,c,max1,max2,min;
	
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Nhap so thu ba: ");
	scanf("%d", &c);
	
	max1 = a;
	max2 = b;
	if (max1 < b && max1 > c)
	{
		max1 = b;
		max2 = a;
	}
	else if (max1 > b && max1 < c)
	{
		max1 = c;
		max2 = a;
	}
	else if (max1 < b && max1 < c)
	{
		max1 = c;
		max2 = b;
	}
	
	min = c;
	if (min > a)
	{
		min = a;
	}
	else if (min > b)
	{
		min = b;
	}
	
	printf("\n");
	printf("So lon thu nhat la: %d \n", max1);
	printf("So lon thu hai la: %d \n", max2);
	printf("So nho nhat la: %d", min);
	
	getch();
	return 0;
}
