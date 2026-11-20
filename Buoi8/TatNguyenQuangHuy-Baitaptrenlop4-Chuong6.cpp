#include <stdio.h>

int DoiThapphan_Nhiphan(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    ;
}

int main()
{
    int n,kq;

    printf("Nhap so n can chuyen doi: "); scanf("%d",&n);

    kq = DoiThapphan_Nhiphan(n);

    printf("So nhi phan cua %d la %d",n,kq);

    return 0;
}