#include <stdio.h>

int min4(int a, int b, int c, int d) {

	int min = a;

	if (b < min)
		min = b;
	if (c < min)
		min = c;
	if (d < min)
		min = d;
}

int main(void) {

	int a, b, c, d;
	int num;
	printf("�� ���� ���� �Է����ּ���");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	scanf_s("%d", &d);

	printf("%d", min4(a, b, c, d));
	system("pause");
	return 0;
}