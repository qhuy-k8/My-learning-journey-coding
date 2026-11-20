#include<stdio.h>
#include<conio.h> 
int main()
{
	char kitu;
	printf("Nhap ki tu: "); 
	scanf("%c", &kitu);
	(kitu >= 'A' && kitu <= 'Z') ? (printf("La chu hoa")) 
	: (kitu >= 'a' && kitu <= 'z')
	? printf("La chu thuong") : printf("Ki tu khac");
	
	getch();
	return 0;
}
