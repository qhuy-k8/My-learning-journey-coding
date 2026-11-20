#include <stdio.h>
#include <conio.h>

int KTChinhPhuong (int n)
{
    if (n < 0)
        return 0;
    else 
    {
        for (int i = 0; i <= n; i++)
            if (i * i == n)
                return 1;
    }
    return 0;
}

int DemChinhPhuong(int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
        if (KTChinhPhuong(i) == 1)
            dem++;
    return dem;
}

int main()
{
	int n, kq;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	
	kq = DemChinhPhuong(n);
	
	printf("So luong cac so chinh phuong nho hon %d la: %d",n,kq);
	
	getch();
	return 0;
}
