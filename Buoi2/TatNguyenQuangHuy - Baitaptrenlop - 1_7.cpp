#include <stdio.h>
#include <conio.h>
#define Giothue 200000
#define Nuocuong 20000

int main () 
{
	int giovao, giora, tonggio, nuoc, total;
	
	//Nhap lieu
	printf("Nhap gio vao: ");
	scanf("%d", &giovao);
	printf("Nhap gio ra: ");
	scanf("%d", &giora);
	printf("Nhap so binh nuoc da uong: ");
	scanf("%d", &nuoc);
	
	//Tinh toan:
	tonggio = giora - giovao;
	total = (tonggio * Giothue) + (nuoc * Nuocuong);
	
	//In ra:
	printf("Tien phai tra: %d \n", total);
	
	getch();
	return 0;
}
