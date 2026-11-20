#include <stdio.h>
#include <conio.h>

int main()
{

    int n;
	
    printf("Nhap n = ");
    scanf("%d", &n);

    if (n < 1 || n > 32)
        printf("Ban da nhap sai so bit. Vui long nhap lai!");
    else
    {
        for (int i = 1; i <= 32; i++)
        {
            if (i <= n)
                printf("1");
            else if (i > n)
                printf("0");
            if (i % 8 == 0 && i < 32)
                printf(".");
        }
    }

    getch();
    return 0;
}