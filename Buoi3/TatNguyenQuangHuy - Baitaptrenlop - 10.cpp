#include <stdio.h>
#include <conio.h>

int main()
{
	float R,Chuvi,Dientich,C,F;
	int sel;
	const float Pi = 3.14;
	
	printf("\n\n");
	printf("\t \t \t TOOL BOX \n");
	printf("\t Cac lua chon: \n");
	printf("\t \t 1. In ra man hinh \n");
	printf("\t \t 2. Do C --> Do F \n");
	printf("\t \t 3. Hinh tron: Chu vi & Dien tich \n");
	printf("\t \t 0. Thoat chuong trinh \n");
	printf("\t Moi ban chon: ");
	scanf("%d", &sel);
	printf("\n\n");
	
	switch (sel)
	{
		case 0:
			printf("\t Chuong trinh se thoat!");
		break;
		
		case 1:
			{
				printf("\t Xin chao cac ban!");				
			}
		break;
		
		case 2:
			{
				printf("\t Nhap nhiet do can chuyen doi: ");
				scanf("%f", &C);
				
				F = C * 1.8 + 32;
				printf("\t Nhiet do theo do F: %.2f do F",F);
			}
		break;
			
		case 3:
			{
				printf("\t Nhap ban kinh duong tron: ");
				scanf("%f", &R);
				
				Chuvi = R * 2 * Pi;
				Dientich = R * R * Pi;
					
				printf("\t Chu vi va dien tich hinh tron: C = %.4f S = %.4f",Chuvi,Dientich);
				
			}
		break;
		
		default:
			printf("\t Vui long nhap lai lua chon!");	
	}
	
	getch();
	return 0;
}
