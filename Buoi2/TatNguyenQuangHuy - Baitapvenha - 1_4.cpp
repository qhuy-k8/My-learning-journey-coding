#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int a, b, C, S;
	float duongcheo;
	
	printf("Nhap canh hinh chu nhat: ");
	scanf("%d", &a);
	printf("Nhap canh con lai cua hinh chu nhat: ");
	scanf("%d", &b);
	
	C = ((a + b) * 2);
	S = a * b;
	duongcheo = float(sqrt((a*a + b*b)));
	
	printf("Chu vi hinh chu nhat: %d \n", C);
	printf("Dien tich hinh chu nhat: %d \n", S);
	printf("Do dai duong cheo cua hinh chu nhat: %f \n", duongcheo);
	
	getch();
	return 0;
}
