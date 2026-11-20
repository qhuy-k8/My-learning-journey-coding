#include <stdio.h>
#include <conio.h>

int main()
{

    int n;
    float sum;
    
    printf("Nhap n = ");
    scanf("%d", &n);
    sum = 0;

    for (int i = 2; i <= n; i++)
        sum = sum + (1 / float(i));
    
    printf("Tong la: %f", sum);

    getch();
    return 0;
}