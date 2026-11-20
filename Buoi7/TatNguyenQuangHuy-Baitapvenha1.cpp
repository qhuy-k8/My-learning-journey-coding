#include <stdio.h>
#include <conio.h>

void Daoso(int n)
{
    int chuso;
    printf("Dao so %d = ",n);
    while (n > 0)
    {
        chuso = n % 10;
        printf("%d",chuso);
        n = n / 10;
    }
}

int main()
{
    int n;
    
    printf("Nhap so nguyen duong n = ");
    scanf("%d",&n);
    
    Daoso(n);

    getch();
    return 0;
}
