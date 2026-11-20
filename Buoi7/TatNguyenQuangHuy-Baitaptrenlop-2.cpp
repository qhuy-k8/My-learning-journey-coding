#include <stdio.h>
#include <conio.h>

int menu()
{
	int sel;
	
	printf("================= MENU ================= \n");
	printf("1. Chuyen doi so giay sang thoi gian \n");
	printf("2. Chuyen doi thoi gian sang so giay \n");
	printf("0. Thoat chuong trinh \n");
	printf("======================================== \n");
	printf("\n\n");
	printf("Moi ban chon: "); scanf("%d", &sel);

	return sel;
}

void Sec2Time(int sec)
{
	int hh,mm,ss;
	
	hh = sec / 3600;
	mm = sec % 3600 /60;
	ss = sec % 3600 % 60;
	
	printf("%d s = %02d:%02d:%02d \n\n",sec,hh,mm,ss);
}

int Time2Sec(int hh, int mm, int ss)
{
	int kq;

	kq = hh*3600 + mm*60 + ss;
	
	printf("%02d:%02d:%02d = %d s \n\n",hh,mm,ss,kq);
	
	return kq;
}

int main()
{
	int sel,hh,mm,ss,kq;
	
	do{
		sel = menu();
		if (sel == 1)
		{
			printf("Nhap so giay can chuyen doi: "); scanf("%d",&ss);
			
			Sec2Time(ss);
		}
		else if (sel == 2)
		{
			printf("Nhap gio: "); scanf("%d", &hh);
			printf("Nhap phut: "); scanf("%d", &mm);
			printf("Nhap giay: "); scanf("%d", &ss);
			
			kq = Time2Sec(hh,mm,ss);
		}
		
	}while(sel != 0);
	
	getch();
	return 0;
}
