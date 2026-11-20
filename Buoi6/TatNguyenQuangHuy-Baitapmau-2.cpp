#include <stdio.h>
#include <conio.h>

int main()
{
	int sel;
	
	do{
		printf("0. Thoat chuong trinh \n");
		printf("1. In ra man hinh tu Hello \n");
		printf("2. In ra man hinh Vong lap FOR \n");
		printf("3. In ra man hinh Vong lap While \n");
		printf("\n");
		printf("Moi ban chon: ");
		scanf("%d",&sel);
		
		switch(sel)
		{
			case 1: printf("Hello!! \n\n");
			break;
			
			case 2: printf("Vong lap FOR \n\n");
			break;
			
			case 3: printf("Vong lap WHILE \n\n");
			break;
		}
	}while (sel != 0);
	
	getch();
	return 0;
}
