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
	printf("n단의 피라미드를 위해 단을 입력하세요:");
	scanf_s("%d", &n);

	spira(n);
}