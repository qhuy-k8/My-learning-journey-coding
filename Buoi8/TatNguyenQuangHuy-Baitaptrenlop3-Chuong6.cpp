#include <stdio.h>

int menu()
{
    int sel;
	
	printf("============================== MENU ============================== \n"); 
	printf("1. In ra man hinh tu n ve 1 (Khong dung de quy) \n");
	printf("2. In ra man hinh tu n ve 1 (Co dung de quy) \n");
	printf("3. Tinh to hop chap k cua n phan tu (Khong dung de quy) \n");
	printf("4. Tinh to hop chap k cua n phan tu (Co dung de quy) \n");
	printf("0. Thoat \n");
	printf("==================================================================");
	printf("\n\n");
	printf("Nhap lua chon cua ban: "); scanf("%d",&sel);
	
	return sel;
}

void InManhinhKoDequy(int n)
{
    for (int i = n; i >= 1; i--)
        printf("%d ",i);
    printf("\n\n");
}

void InManhinhCoDequy(int n)
{
    if (n <= 0)
        return;
    printf("%d ",n);
    InManhinhCoDequy(n - 1);
}

long long Giaithua(int n)
{
    long long giaithua = 1;

    for (int i = 1; i <= n; i++)
        giaithua = giaithua * i;
    
    return giaithua;
}

int TinhTohopKoDequy(int n, int k)
{
    return Giaithua(n) / (Giaithua(k) * Giaithua(n - k));
}

int TinhTohopCoDequy(int n, int k)
{
    if (n == k || k == 0)
        return 1;
    return TinhTohopCoDequy(n - 1, k - 1) + TinhTohopCoDequy(n - 1, k);
}

int main()
{
    int n,k,sel,kq;

    do{
        sel = menu();

        if (sel == 1)
        {
            printf("Nhap n: ");
            scanf("%d",&n);

            InManhinhKoDequy(n);
        }
        if (sel == 2)
        {
            printf("Nhap n: ");
            scanf("%d",&n);

            InManhinhCoDequy(n);
            printf("\n\n");
        }
        if (sel == 3)
        {
            printf("Nhap k: ");
            scanf("%d",&k);
            printf("Nhap n phan tu: ");
            scanf("%d",&n);

            kq = TinhTohopKoDequy(n,k);

            printf("To hop chap %d cua %d phan tu la: %d \n\n",k,n,kq);
        }
        if (sel == 4)
        {
            printf("Nhap k: ");
            scanf("%d",&k);
            printf("Nhap n phan tu: ");
            scanf("%d",&n);

            kq = TinhTohopCoDequy(n,k);

            printf("To hop chap %d cua %d phan tu la: %d \n\n",k,n,kq);
        }
    }while (sel != 0);

    return 0;
}