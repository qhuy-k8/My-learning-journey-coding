#include <stdio.h>
#include <conio.h>

int main()
{
	int a,chuso;
	
	printf("Nhap so nguyen a: ");
	scanf("%d",&a);
	
	chuso = 0;
	
	printf("Dao nguoc so %d: ",a);
	while (a > 0)
	{
		chuso = a % 10;
		printf("%d", chuso);
		
		a = a/10;
	}
	
	getch();
	return 0;
}
