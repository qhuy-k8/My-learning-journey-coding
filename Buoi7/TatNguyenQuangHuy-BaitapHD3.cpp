#include <stdio.h>
#include <conio.h>

void Xuatle(int n)
{
	for (int i = n; i >= 1; i--)
		if (i % 2 != 0)
			printf("%d \t", i);
}

int main()
{
	int n;
	printf("Nhap n: "); scanf("%d", &n);
	
	Xuatle(n);
	
	getch();
	return 0;
}
