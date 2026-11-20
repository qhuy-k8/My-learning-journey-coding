#include <stdio.h>
#include <conio.h>

int main()
{
	int thang;
	
	printf("Nhap thang: ");
	scanf("%d", &thang);
	
	switch(thang)
	{
		case 1:
			printf("Co 31 ngay");
		break;
		
		case 2:
			printf("Co 28 hoac 29 ngay");
		break;
		
		case 3:
			printf("Co 31 ngay");
		break;
		
		case 4:
			printf("Co 30 ngay");
		break;
		
		case 5:
			printf("Co 31 ngay");
		break;
		
		case 6:
			printf("Co 30 ngay");
		break;
		
		case 7:
			printf("Co 31 ngay");
		break;
		
		case 8:
			printf("Co 31 ngay");
		break;
		
		case 9:
			printf("Co 30 ngay");
		break;
		
		case 10:
			printf("Co 31 ngay");
		break;
		
		case 11:
			printf("Co 30 ngay");
		break;
		
		case 12:
			printf("Co 31 ngay");
		break;
		
		default:
			printf("Nhap lai thang hop le!");
	}
	
	getch();
	return 0;
}
