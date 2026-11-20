#include <stdio.h>
#include <conio.h>

int main()
{
	int n,dem,chuso;
	
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	
	printf("So %d co ", n);
	
	dem = 0;

	
	while (n > 0)
	{
		chuso = n%10;
		if (chuso % 2 == 0)
			dem = dem + 1;
		n = n/10;
	}
	
	printf("%d chu so chan", dem);
	
	getch();
	return 0;
}
