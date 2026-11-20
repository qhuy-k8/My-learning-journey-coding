#include <stdio.h>
#include <conio.h>

int main()
{

    int n;
    long long giaithua;
    
    printf("Nhap n = ");
    scanf("%d", &n);
    giaithua = 1;

    for (int i = 1; i <= n; i++)
        giaithua = giaithua * i;
    
    printf("%d! = %lld",n,giaithua);

    getch();
    return 0;
}