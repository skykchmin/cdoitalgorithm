#include <stdio.h>

int min3(int a, int b, int c) {

	int min = a;

	if (b < min)
		min = b;
	if (c < min)
		min = c;
}

int main(void) {

	int a, b, c;
	int num;
	printf("�� ���� ���� �Է����ּ���");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	printf("%d", min3(a, b, c));
	system("pause");
	return 0;
}