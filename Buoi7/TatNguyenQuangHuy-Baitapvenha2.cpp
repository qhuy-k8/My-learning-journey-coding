#include <stdio.h>

int menu()
{
    int sel;

    printf("======================= MENU ======================== \n");
    printf("1. Tam giac 1 \n");
    printf("2. Tam giac 2 \n");
    printf("3. Tam giac 3 \n");
    printf("0. Thoat \n");
    printf("===================================================== \n");
    printf("\n");
    printf("Nhap lua chon cua ban: "); scanf("%d", &sel);
    
    return sel;
}

void Sao1(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= i; j++)
        	printf("*");
        printf("\n");
    }
}

void Sao2(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h - i; j++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
        	printf("*");
        printf("\n");
    }
}

void Sao3(int h)
{
    for (int i = h; i >= 1; i--)
    {
        for (int j = 1; j <= h - i; j++)
            printf(" ");
        for (int j = i; j >= 1; j--)
        	printf("*");
        printf("\n");
    }
}

int main()
{
    int sel,h;

    do{
        sel = menu();

        if (sel == 1)
        {
            printf("Nhap chieu cao h: ");
            scanf("%d",&h);
            Sao1(h);
        }

        else if (sel == 2)
        {
            printf("Nhap chieu cao h: ");
            scanf("%d",&h);
            Sao2(h);
        }

        else if (sel == 3)
        {
            printf("Nhap chieu cao h: ");
            scanf("%d",&h);
            Sao3(h);
        }
            
    }while (sel != 0);

    return 0;
}