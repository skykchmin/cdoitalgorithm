#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y) do{ type t = x; x= y; y= t;}while(0)
void ary_copy(int a[], const int b[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		a[i] = b[i];
	}
	for (i = 0; i < n / 2; i++) {
		swap(int, a[i], a[n - i - 1]);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
}

int main(void) {
	int number;
	int *a;
	int *b;
	int i;
	printf("�迭�� ����� ������ �Է��ϼ���");
	scanf_s("%d", &number);
	a = calloc(number, sizeof(int));
	b = calloc(number, sizeof(int));

	if (a == NULL)
		printf("�޸� Ȯ���� �����߽��ϴ�:)");
	else {
		printf("��Ҹ� �Է����ּ���");
		for (i = 0; i < number; i++)
		{
			scanf_s("%d", &b[i]);
		}
		ary_copy(a, b, number);
		free(a);
		free(b);
	}
	system("pause");
	return 0;
}