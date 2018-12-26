#include <stdio.h>

int max4(int a, int b, int c, int d) {
	int max = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (d > max) {
		max = d;
	}
	
	return max;
}

int main(void) {

	int a, b, c, d;
	int num;
	printf("네 개의 값을 입력해주세요");
		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);
		scanf_s("%d", &d);
		printf("%d", max4(a,b,c,d));
		system("pause");
	return 0;
}