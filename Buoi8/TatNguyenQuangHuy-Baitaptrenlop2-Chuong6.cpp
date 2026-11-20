#include <stdio.h>

int menu()
{
	int sel;
	
	printf("========== MENU ========== \n"); 
	printf("1. Tinh tong S = n + S(n-1) \n");
	printf("2. In n dau * \n");
	printf("3. Dem so chu so cua n \n");
	printf("4. Tim UCLN cua 2 so \n");
	printf("0. Thoat \n");
	printf("==========================");
	printf("\n\n");
	printf("Nhap lua chon cua ban: "); scanf("%d",&sel);
	
	return sel;
}

int Tong(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	
	return n + Tong(n - 1);
}

void InSao(int n)
{
	if (n <= 0)
		printf("\n\n");
	else
	{
		printf("* ");
		InSao(n - 1);
	}
}

int DemChuso(int n)
{
	if (n < 0)
		n = -n;
	
	if (n < 10)
		return 1;
	return 1 + DemChuso(n / 10);
	
}

int UCLN(int a, int b)
{
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	if (b == 0)
		return a;
	return UCLN(b,a%b) ;
}

int main()
{
	int sel,n,a,b,kq;
	
	do{
		sel = menu();
		
		if (sel == 1)
		{
			printf("Nhap n = "); scanf("%d",&n);
			
			kq = Tong(n);
			printf("Tong cac so nguyen duong tu 1 den %d la: %d \n\n",n,kq);
		}
		
		else if (sel == 2)
		{
			printf("Nhap so luong sao ban muon in: "); scanf("%d", &n);
			InSao(n);
		}
		else if (sel == 3)
		{
			printf("Nhap so n: "); scanf("%d",&n);
			kq = DemChuso(n);
			printf("%d co %d chu so \n\n",n,kq);
		}
		else if (sel == 4)
		{
			printf("Nhap so a: "); scanf("%d",&a);
			printf("Nhap so b: "); scanf("%d",&b);
			kq = UCLN(a,b);
			printf("UCLN cua %d va %d la %d \n\n",a,b,kq);
		}
	}while(sel != 0);
	
	return 0;
}
