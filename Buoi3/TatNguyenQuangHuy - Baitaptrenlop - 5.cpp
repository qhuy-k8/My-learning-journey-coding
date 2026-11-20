#include <stdio.h>
#include <conio.h>

int main()
{
	//Khai bao
	float a,b,c,R,Chuvi,Dientich;
	int sel;
	char sel2;
	const float Pi = 3.14;
	
	//GUI
	printf("\n\n");
	printf("\t \t \t MATH BOX \n");
	printf("\t Cac lua chon: \n");
	printf("\t \t 1. Hinh vuong \n");
	printf("\t \t 2. Hinh chu nhat \n");
	printf("\t \t 3. Hinh tron \n");
	printf("\t \t 0. Thoat chuong trinh \n");
	
	//Lua chon
	printf("\t Moi ban chon: ");
	scanf("%d", &sel);
	printf("\n\n");
	
	//Tinh toan tren cac lua chon
	switch (sel)
	{
		case 0:
			printf("\t Chuong trinh se thoat!");
		break;
		
		case 1:
			{
			
				printf("\t Nhap canh hinh vuong: ");
				scanf("%f", &c);
				fflush(stdin);
				printf("\t Ban muon tinh chu vi hay dien tich? (Bam C de tinh chu vi, S de tinh dien tich): ");
				scanf("%c", &sel2);
				printf("\n");
			
				if (sel2 == 'C')
				{
					Chuvi = c * 4;
					printf("\t Chu vi hinh vuong: C = %.4f", Chuvi);
				}
				else if (sel2 == 'S')
				{
					Dientich = c * c;
					printf("\t Dien tich hinh vuong: S = %.4f", Dientich);
				}
				else 
				{
					printf("\t Nhap lai lua chon!");
				}
				
			}
		break;
		
		case 2:
			{
				
				printf("\t Nhap canh thu nhat cua hinh chu nhat: ");
				scanf("%f", &a);
				printf("\t Nhap canh con lai cua hinh chu nhat: ");
				scanf("%f", &b);
				fflush(stdin);
				printf("\t Ban muon tinh chu vi hay dien tich? (Bam C de tinh chu vi, S de tinh dien tich): ");
				scanf("%c", &sel2);
				printf("\n");
			
				if (sel2 == 'C')
				{
					Chuvi = (a+b)*2;
					printf("\t Chu vi hinh chu nhat: C = %.4f", Chuvi);
				}
				else if (sel2 == 'S')
				{
					Dientich = a * b;
					printf("\t Dien tich hinh chu nhat: S = %.4f", Dientich);
				}
				else 
				{
					printf("\t Nhap lai lua chon!");
				}
			
			}
		break;
			
		case 3:
			{
				
				printf("\t Nhap ban kinh duong tron: ");
				scanf("%f", &R);
				fflush(stdin);
				printf("\t Ban muon tinh chu vi hay dien tich? (Bam C de tinh chu vi, S de tinh dien tich): ");
				scanf("%c", &sel2);
				printf("\n");
			
				if (sel2 == 'C')
				{
					Chuvi = R * 2 * Pi;
					printf("\t Chu vi hinh tron: C = %.4f", Chuvi);
				}
				else if (sel2 == 'S')
				{
					Dientich = R * R * Pi;
					printf("\t Dien tich hinh tron: S = %.4f", Dientich);
				}
				else 
				{
					printf("\t Nhap lai lua chon!");
				}
			
			}
		break;
		
		default:
			printf("\t Vui long nhap lai lua chon!");	
	}

	//Hoan thanh
	getch();
	return 0;
}
