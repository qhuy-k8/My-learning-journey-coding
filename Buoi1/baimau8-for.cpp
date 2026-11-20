#include <stdio.h>
#include <conio.h>

int main()
{

    int n;
	long long tong,giaithua;
	
    printf("Nhap n = ");
    scanf("%d", &n);
    giaithua = 1; 
    tong = 0;

    for (int i = 1; i <= n; i++)
    {
		giaithua = giaithua * i;
    	tong = tong + giaithua;
	}
	
    printf("Tong la: %lld",tong);

    getch();
    return 0;
}