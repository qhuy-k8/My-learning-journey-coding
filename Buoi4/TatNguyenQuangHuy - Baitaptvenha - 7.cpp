#include <stdio.h>
#include <conio.h>

int main() 
{
	float cot1,cot2,cot3,cot4,tb;
	char GPA;
	
	printf("Nhap diem cot 1: ");
	scanf("%f", &cot1);
	printf("Nhap diem cot 2: ");
	scanf("%f", &cot2);
	printf("Nhap diem cot 3: ");
	scanf("%f", &cot3);
	printf("Nhap diem cot 4: ");
	scanf("%f", &cot4);
	printf("\n");
	
	tb = (cot1 + cot2 + cot3 + cot4) / 4;
	
	if (tb >= 8.5)
		{
			GPA = 'A';
			printf("Diem trung binh cua ban la: %.2f \n",tb);
			printf("Diem trung binh bang chu: %c \n",GPA);
		}
	else if (tb >= 7)
		{
			GPA = 'B';
			printf("Diem trung binh cua ban la: %.2f \n",tb);
			printf("Diem trung binh bang chu: %c \n",GPA);
		}
	else if (tb >= 5.5)
		{
			GPA = 'C';
			printf("Diem trung binh cua ban la: %.2f \n",tb);
			printf("Diem trung binh bang chu: %c \n",GPA);
		}
	else if (tb >= 4)
		{
			GPA = 'D';
			printf("Diem trung binh cua ban la: %.2f \n",tb);
			printf("Diem trung binh bang chu: %c \n",GPA);
		}
	else if (tb < 4)
		{
			GPA = 'F';
			printf("Diem trung binh cua ban la: %.2f \n",tb);
			printf("Diem trung binh bang chu: %c \n",GPA);
		}
	else
		printf("Vui long nhap lai!");
		
	
	getch();
	return 0;
}
