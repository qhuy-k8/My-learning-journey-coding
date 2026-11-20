#include <stdio.h>
#include <conio.h>

int main()
{

    int n,sum;
    
    printf("Nhap n = ");
    scanf("%d", &n);
    sum = 0;

    for (int i = 1; i <= n; i++)
        if (i %2 != 0)
            sum = sum + i;
    
    printf("Tong la: %d", sum);

    getch();
    return 0;
}
