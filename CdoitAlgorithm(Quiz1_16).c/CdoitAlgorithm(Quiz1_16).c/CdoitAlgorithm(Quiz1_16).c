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

	puts("직각 이등변 삼각형을 출력합니다.");
	do {
		printf("크기 : ");
		scanf_s("%d", &n);
	} while (n <= 0);

	printf("\n 왼쪽   아래가 직각 \n"); triangleLB(n);
	printf("\n 왼쪽   위가   직각 \n"); triangleLU(n);
	printf("\n 오른쪽 위가   직각 \n"); triangleRU(n);
	printf("\n 오른쪽 아래가 직각 \n"); triangleRB(n);

	system("pause");
	return 0;
}