#include <stdio.h>

void spira(int n) {
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)				
			putchar(' ');
		for (int j = 1; j <= (i - 1) * 2 + 1; j++)		
			putchar('*');
		putchar('\n');
	}
}

int main(void) {

	int n;
	printf("n���� �Ƕ�̵带 ���� ���� �Է��ϼ���:");
	scanf_s("%d", &n);

	spira(n);
}