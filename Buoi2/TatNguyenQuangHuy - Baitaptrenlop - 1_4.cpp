#include <stdio.h>
#include <conio.h>
int main () 
{
	int a, b;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	
	a > b ? printf("So lon nhat la: %d", a) : printf("So lon nhat la: %d", b);
	
	getch();
	return 0;
}
