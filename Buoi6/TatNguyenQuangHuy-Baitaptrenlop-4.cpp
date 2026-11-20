#include <stdio.h>
#include <conio.h>

int main()
{
	int a,tong;
	
	tong = 0;
	
	do{
		printf("Nhap so nguyen a: ");
		scanf("%d", &a);
		printf("So vua nhap la %d \n", a);
		tong = tong + a;
	}while(a != 0);
	
	printf("Tong cac so vua nhap la: %d",tong);
	
	getch();
	return 0;
}
