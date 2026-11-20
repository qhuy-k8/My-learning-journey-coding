#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int a,dem,temp,donvi,chuc,tram;
	dem = 0;
	while (1)
	{
		printf("Nhap so nguyen a: ");
		scanf("%d", &a);
		
		if (a >= 100 && a <= 999 || a >= -999 && a <= -100)
		{
			temp = abs(a);
			tram = temp / 100;
			chuc = temp / 10 % 10;
			donvi = temp % 10;
			
			if (tram != chuc && chuc != donvi && tram != donvi)
			{
				printf("%d \n", a);
				dem++;
			}
			else 
				break;
			
		}
		
		else
			break;
		
	}

	printf("So chu so hop le: %d",dem);
	getch();
	return 0;
}