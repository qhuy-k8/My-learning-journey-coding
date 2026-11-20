#include <stdio.h>
#include <conio.h>

int main()
{
	int n = 2;
	int i, nguyento;
	
	printf("Cac so nguyen to nho hon 100: ");
	
	while (n < 100)
    {
        nguyento = 1; 
        i = 2;        
        
        while (i < n)
        {
            if (n % i == 0)
            {
                nguyento = 0;
            }
            i++; 
        }
        
        if (nguyento == 1)
        {
            printf("%d ", n);
        }
        n++;
    }
    
	getch();
	return 0;
}
