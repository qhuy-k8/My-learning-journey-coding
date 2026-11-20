#include <stdio.h>
#include <conio.h>

int main () 
{
	float Toan, Ly, Hoa, hesoToan, hesoLy, hesoHoa, tb, tongheso;
	
	printf("Nhap diem mon Toan: ");
	scanf("%f", &Toan);
	
	printf("Nhap diem mon Ly: ");
	scanf("%f", &Ly);
	
	printf("Nhap diem mon Hoa: ");
	scanf("%f", &Hoa);
	
	printf("Nhap he so mon Toan: ");
	scanf("%f", &hesoToan);
	
	printf("Nhap he so mon Ly: ");
	scanf("%f", &hesoLy);
	
	printf("Nhap he so mon Hoa: ");
	scanf("%f", &hesoHoa);
	
	tongheso = (hesoToan + hesoLy + hesoHoa);
	tb = ((Toan * hesoToan) + (Ly * hesoLy) + (Hoa * hesoHoa)) / tongheso;
	
	printf("Diem trung binh cua sinh vien: %f \n", tb);
		
	getch();
	return 0;
}
