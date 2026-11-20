#include <stdio.h>

int menu()
{
	int sel;
	printf("============================== MENU ================================= \n");
	printf("0. Thoat \n");
	printf("1. Tinh tong cac uoc cua so nguyen n \n");
	printf("2. Doi cho 2 so nguyen x va y \n");
	printf("3. Tim BCNN cua 2 so nguyen duong a va b \n");
	printf("4. Kiem tra so nguyen duong n co cac chu so toan la chu so le khong \n");
	printf("===================================================================== \n");
	printf("\n");
	printf("Nhap lua chon cua ban: "); 
	scanf("%d",&sel);

	return sel;
}

int TongUoc(int n)
{
	int tong = 0;
	
	if (n < 0)
		n = -n;
	
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			tong = tong + i;
	
	return tong;
}

void Swap(int &x, int &y)
{
	int z;

	printf("Hoan doi vi tri 2 so nguyen %d va %d: ",x,y);
	
	z = x;
	x = y;
	y = z;

	printf("x = %d, y = %d \n\n",x,y);
}

int BCNN(int a, int b)
{
	int BCNN;

	int tempA = a;
	int tempB = b;

	if (a == 0 || b == 0)
		return a + b;
	
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}

	BCNN = (tempA * tempB)/a;

	return BCNN;
}

int KTChusoLe(int n)
{
	int chuso = 0;
	int flag = 1;
	while (n > 0)
	{
		chuso = n % 10;
		if (chuso % 2 == 0)
		{
			flag = 0;
			break;
		}	
		else 
			flag = 1;
		n = n/10;
	}

	return flag;
}

int main()
{
	int sel, n, a, b,kq;
	int x, y,z;

	
	do{
		sel = menu();
		if (sel == 1)
			{
				printf("Nhap n: ");
				scanf("%d",&n);

				kq = TongUoc(n);

				printf("Tong cac uoc cua %d la %d \n\n",n,kq);
			}
		
		if (sel==2)
			{
				printf("Nhap x: ");
				scanf("%d",&x);
				printf("Nhap y: ");
				scanf("%d",&y);

				Swap(x,y);
			}

		if(sel==3)
		{
				printf("Nhap so nguyen duong a: ");
				scanf("%d",&a);
				printf("Nhap so nguyen duong b: ");
				scanf("%d",&b);

				kq = BCNN(a,b);

				printf("BCNN cua %d va %d la: %d \n\n",a,b,kq);			
		}

		if (sel==4)
		{
			printf("Nhap so nguyen duong n: ");
			scanf("%d",&n);

			kq = KTChusoLe(n);

			if (kq == 0)
				printf("%d khong co toan bo chu so la so le\n\n",n);
			else if (kq == 1)
				printf("Toan bo chu so cua %d la so le\n\n",n);
		}
	}while (sel != 0);
	
	return 0;
}
