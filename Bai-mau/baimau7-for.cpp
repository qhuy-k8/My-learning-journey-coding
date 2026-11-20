#include <stdio.h>
#include <conio.h>

int main()
{

    int n,tong,giaithua;
	
    printf("Nhap n = ");
    scanf("%d", &n);
    giaithua = 1; 
    tong = 1;

    for (int i = 1; i <= n; i++)
        giaithua = giaithua * i;
    for (int j = 0; j <= n; j++)
        tong = tong + giaithua;
    
    printf("Tong la: %d",tong);

    getch();
    return 0;
}
