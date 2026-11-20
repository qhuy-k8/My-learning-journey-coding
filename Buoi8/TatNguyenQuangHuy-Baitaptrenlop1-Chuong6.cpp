#include <stdio.h>
#include <conio.h>

int Fibo(int n)
{
	if (n == 1)
		return 1;
	if (n == 2)
		return 1;
	return Fibo(n-1) + Fibo(n-2);
}

int main()
{
	int n,kq;
	
	printf("Nhap n: ");
	scanf("%d",&n);
	
	kq = Fibo(n);
	
	printf("So Fibonacci thu %d la: %d",n,kq);
	
	getch();
	return 0;
}
