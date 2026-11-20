#include <stdio.h>

int menu()
{
	int sel;
	
	printf("================= MENU ================= \n");
	printf("1. Tinh n! \n");
	printf("2. Hoan vi 2 so \n");
	printf("3. In ra n dau * \n");
	printf("4. Kiem tra so nguyen to \n");
	printf("5. Dem so chu so cua so n \n");
	printf("6. Tim UCLN giua 2 so \n");
	printf("0. Thoat chuong trinh \n");
	printf("======================================== \n");
	printf("\n\n");
	printf("Moi ban chon: "); scanf("%d", &sel);

	return sel;
}

long Giaithua(int n)
{
	if (n < 0)
		return -1;
	
	long kq = 1;
	for (int i = 1; i <= n; i++)
		kq = kq * i;
	
	return kq;
}

void Swap(float &a, float &b)
{
	float c;
	
	c = a;
	a = b;
	b = c;
}

void InSao(int n)
{
	for(int i = 1; i <= n; i++)
		printf("* ");
	
	printf("\n\n");
}

int KTNT(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	
	return 1;
}

int SoChuSo(int n)
{
	int dem = 0;
	if (n < 0)
		n = -n;
	do{
		n = n / 10;
		dem++;
	}while (n != 0);
	
	return dem;
}

int UCLN(int a, int b)
{
	if (a == 0 || b == 0)
		return a + b;
	
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	
	return a;
}

int main()
{
	int sel,n,dem,c,d;
	float a,b;
	long kq;
	
	do{
		sel = menu();
		
		if (sel == 1)
		{
			printf("Nhap n = "); scanf("%d",&n);
			
			kq = Giaithua(n);
			
			printf("%d! = %lld \n\n",n,kq);
		}
		else if (sel == 2)
		{
			printf("Nhap so a: "); scanf("%f",&a);
			printf("Nhap so b: "); scanf("%f",&b);
			
			Swap(a,b);
			
			printf("Hoan vi: a = %.4f va b = %.4f \n\n",a,b);
		}
		else if (sel == 3)
		{
			printf("Nhap so luong sao ban muon in ra: "); scanf("%d", &n);
			
			InSao(n);
		}
		else if (sel == 4)
		{
			printf("Nhap so n can kiem tra: "); scanf("%d", &n);
			
			kq = KTNT(n);
			
			if (kq == 0)
				printf("%d khong la so nguyen to \n\n",n);
			else if (kq == 1)
				printf("%d la so nguyen to \n\n",n);
		}
		else if (sel == 5)
		{
			printf("Nhap so n can dem: "); scanf("%d",&n);
			
			kq = SoChuSo(n);
			
			printf("%d co %d chu so \n\n",n,kq);
		}
		else if (sel == 6)
		{
			printf("Nhap a: "); scanf("%d", &c);
			printf("Nhap b: "); scanf("%d", &d);
	
			kq = UCLN(c,d);
	
			printf("UCLN cua %d va %d: %d \n\n",c,d,kq);
		}
	}while(sel != 0);
	
	return 0;
}
