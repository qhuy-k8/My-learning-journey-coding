#include <stdio.h>
#include <conio.h>

int main()
{
	int a,sum;
	
	printf("Nhap so nguyen a: ");
	scanf("%d", &a);
	
	printf("Tong cua cac chu so trong %d la: ",a);
	
	sum = 0;
	
	while (a > 0)
	{
		sum = sum + (a%10);
		a = a / 10;
	}
	
	printf("%d",sum);
	
	getch();
	return 0;
}
