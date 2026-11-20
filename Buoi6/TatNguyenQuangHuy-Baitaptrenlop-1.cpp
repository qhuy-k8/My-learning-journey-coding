#include <stdio.h>
#include <conio.h>

int main()
{
	int n,i,uoc;
	
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	
	uoc = 0;
	i = 1;
	
	do{
		if (n <= 1)
			printf("So nguyen to phai thoa man: n > 1. Vui long nhap lai!");
		else if (n > 1)
		{
			while (i <= n)
			{
				if (n % i == 0)
					uoc++;
				i++;
			}
		}
	}while (n > 1);

	if (uoc == 2)
		printf("%d la so nguyen to!",n);
	else
		printf("%d khong la so nguyen to!",n);
	
	getch();
	return 0;
}
