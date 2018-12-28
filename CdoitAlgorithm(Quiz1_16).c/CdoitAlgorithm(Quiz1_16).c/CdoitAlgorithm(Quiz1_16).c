#include <stdio.h>


void triangleLB(int n)
{
	int i, j;

	for (i = 1; i <= n; i++) {			
		for (j = 1; j <= i; j++)		
			putchar('*');
		putchar('\n');
	}
}


void triangleLU(int n)
{
	int i, j;

	for (i = 1; i <= n; i++) {					
		for (j = 1; j <= n - i + 1; j++)	
			putchar('*');
		putchar('\n');
	}
}


void triangleRU(int n)
{
	int i, j;

	for (i = 1; i <= n; i++) {					
		for (j = 1; j <= i - 1; j++)			
			putchar(' ');
		for (j = 1; j <= n - i + 1; j++)		
			putchar('*');
		putchar('\n');
	}
}


void triangleRB(int n)
{
	int i, j;

	for (i = 1; i <= n; i++) {					
		for (j = 1; j <= n - i; j++)		
			putchar(' ');
		for (j = 1; j <= i; j++)				
			putchar('*');
		putchar('\n');
	}
}

int main(void)
{
	int n;

	puts("���� �̵ �ﰢ���� ����մϴ�.");
	do {
		printf("ũ�� : ");
		scanf_s("%d", &n);
	} while (n <= 0);

	printf("\n ����   �Ʒ��� ���� \n"); triangleLB(n);
	printf("\n ����   ����   ���� \n"); triangleLU(n);
	printf("\n ������ ����   ���� \n"); triangleRU(n);
	printf("\n ������ �Ʒ��� ���� \n"); triangleRB(n);

	system("pause");
	return 0;
}