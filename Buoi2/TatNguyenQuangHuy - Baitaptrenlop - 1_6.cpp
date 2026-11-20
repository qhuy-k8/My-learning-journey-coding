#include <stdio.h>
#include <conio.h>
#define Dongiatuan 500000
#define Dongiangay 100000

int main () 
{
	int sotuanthue, songayle, tongsongaythue, total;
	
	printf("Tinh tien thue phong \n");
	printf("Don gia tuan: %d. Don gia ngay: %d \n", Dongiatuan, Dongiangay);
	printf("Nhap vao tong so ngay thue phong: ");
	scanf("%d", &tongsongaythue);
	sotuanthue = tongsongaythue / 7;
	songayle = tongsongaythue%7;
	total = (sotuanthue * Dongiatuan) + (songayle * Dongiangay);
	
	printf("So tuan ma khach thue: %d. So ngay khach thue: %d \n", sotuanthue, songayle);
	printf("Tien phai tra: %d", total);
	
	getch();
	return 0;
}
