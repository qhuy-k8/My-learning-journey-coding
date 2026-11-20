#include <stdio.h>
#include <conio.h>

int main () 
{
	int a, b, c;
	printf("Nhap hai so nguyen a, b: ");
	scanf("%d %d", &a, &b);
	
	c = a;
	a = b;
	b = c;
	printf("Hoan doi so: a = %d, b = %d", a, b);
	
	getch();
	return 0;
}
