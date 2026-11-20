#include <stdio.h>
#include <conio.h>
#include <math.h>

int Tong(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + (pow(-1, i - 1) * i);
	
	return sum;
}

int main()
{
	int n,sum;
	
	printf("Nhap so n = ");
	scanf("%d",&n);
	
	sum = Tong(n);
	
	printf("Tong la: %d",sum);
	
	getch();
	return 0;
}
