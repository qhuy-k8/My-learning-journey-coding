#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() 
{
	
	int hh,mm,ss,sec;
	printf("Nhap tong so giay: ");
	scanf("%d", &sec);
	
	hh = sec / 3600;
	mm = (sec % 3600) / 60;
	ss = sec % 3600 % 60;
		
	if (hh == 24 && mm == 0 && ss == 0 || sec == 0)
	{
		printf("Thoi gian hien tai la 0h");
	}
	else
	{
		printf("Thoi gian hien tai la: %d:%d:%d", hh,mm,ss);
	}
	
	getch();
	return 0;
}
