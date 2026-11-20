#include <stdio.h>
#include <conio.h>

int main()
{
	int i,n,a,tong;
	long long tich;
	
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	i = 0;
	tong = 0;
	tich = 1;
	
	while (i < n)
	{
		printf("Nhap so nguyen a: ");
		scanf("%d",&a);
		
		tong = tong + a;
		tich = tich * a;
		i++;
	}
	
	printf("Tong cua cac phan tu vua nhap: %d \n",tong);
	printf("Tich cua cac phan tu vua nhap: %lld",tich);
	
	getch();
	return 0;
}
