#include <stdio.h>
#include <conio.h>

int main()
{;

    int n;
    float sum;
    
    printf("Nhap n = ");
    scanf("%d", &n);
    sum = 0;

    for (int i = 1; i <= n; i++)
        sum = sum + (float(2 * i - 1) / (2 * i));
    
    printf("Tong la: %f", sum);

    getch();
    return 0;
}