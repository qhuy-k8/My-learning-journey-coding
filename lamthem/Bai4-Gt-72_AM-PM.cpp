#include <stdio.h>
#include <conio.h>

int main() 
{
	
	int hh,hh2,mm,ss,sec;
	printf("Nhap tong so giay: ");
	scanf("%d", &sec);
	
	hh = sec / 3600;
	mm = (sec % 3600) / 60;
	ss = sec % 3600 % 60;
		
	if (hh == 24 && mm == 0 && ss == 0 || sec == 0)
	{
		printf("Thoi gian hien tai la 12h AM");
	}
	else if (sec != 0 && sec < 3600)
	{
		printf("Thoi gian hien tai la 12:%d:%d AM",mm,ss);
	}
	else if (hh < 12)
	{
		printf("Thoi gian hien tai la: %d:%d:%d AM", hh,mm,ss);
	}
	else if (hh >= 12)
	switch(hh)
	{
		case 12:
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh,mm,ss);
		break;
		
		case 13:
			hh2 = 1;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 14:
			hh2 = 2;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 15:
			hh2 = 3;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 16:
			hh2 = 4;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 17:
			hh2 = 5;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 18:
			hh2 = 6;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 19:
			hh2 = 7;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 20:
			hh2 = 8;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 21:
			hh2 = 9;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 22:
			hh2 = 10;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
		
		case 23:
			hh2 = 11;
			printf("Thoi gian hien tai la: %d:%d:%d PM", hh2,mm,ss);
		break;
	}
	
	getch();
	return 0;
}
