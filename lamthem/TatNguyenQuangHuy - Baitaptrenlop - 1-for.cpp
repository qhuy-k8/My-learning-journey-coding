#include <stdio.h>
#include <conio.h>

int main()
{
    int n, tong;
    printf("Nhap n: ");
    scanf("%d", &n);
    tong = 0;

    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
            tong = tong + i;

    printf("Tong cua cac so chan tu 1 den %d la: %d", n, tong);

    getch();
    return 0;
}