#include <stdio.h>
#include <conio.h>

float Tong(int n)
{
	float sum = 0;
	for (int i = 1; i <= n; i++)
		sum = sum + (1 / (2 * (float)i));
		
	return sum;
}

int main()
{
	int n;
	float sum;
	
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	sum = Tong(n);
	
	printf("Tong la: %.6f",sum);
	
	getch();
	return 0;
}
