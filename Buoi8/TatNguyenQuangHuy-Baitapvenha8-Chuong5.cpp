#include <stdio.h>
#include <conio.h>

int KTChinhPhuong (int n)
{
    if (n < 0)
        return 0;
    else 
    {
        for (int i = 0; i * i <= n; i++)
            if (i * i == n)
                return 1;
    }
    return 0;
}

void XuatChinhPhuong (int soluong)
{
	int dem = 0;
	int i = 1;
	
	while (dem < soluong)
	{
		if (KTChinhPhuong(i) == 1)
		{
			printf("%d ",i);
			dem++;
		}
		i++;
	}
		
}

int main()
{
	int soluong;
	
	printf("Nhap so luong so chinh phuong ban muon xuat: ");
	scanf("%d",&soluong);
	
	XuatChinhPhuong(soluong);
	
	getch();
	return 0;
}
