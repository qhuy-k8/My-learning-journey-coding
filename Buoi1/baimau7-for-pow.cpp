#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{

    int x,n,kq;

    printf("Nhap x = ");
    scanf("%d", &x);
	printf("Nhap n = ");
    scanf("%d", &n);
    kq = 0;

    kq = pow(x,n);
    
    printf("%d ^ %d = %d",x,n,kq);

    getch();
    return 0;
}
