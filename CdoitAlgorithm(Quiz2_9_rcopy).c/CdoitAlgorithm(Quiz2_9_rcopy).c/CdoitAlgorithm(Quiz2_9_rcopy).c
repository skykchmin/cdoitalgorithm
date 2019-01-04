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
	printf("배열의 요소의 개수를 입력하세요");
	scanf_s("%d", &number);
	a = calloc(number, sizeof(int));
	b = calloc(number, sizeof(int));

	if (a == NULL)
		printf("메모리 확보에 실패했습니다:)");
	else {
		printf("요소를 입력해주세요");
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