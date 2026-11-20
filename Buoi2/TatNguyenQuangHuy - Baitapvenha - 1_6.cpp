#include<stdio.h>
#include<conio.h> 
int main()
{
	char kitu;
	printf("Nhap ki tu: "); 
	scanf("%c", &kitu);
	
	(kitu >= 'A' && kitu <= 'Z') || (kitu >= 'a' && kitu <='z')?(printf("Thuoc 26 bang chu cai tieng Anh")):(printf("Vui long nhap lai!"));
	
	getch();
	return 0;
}
