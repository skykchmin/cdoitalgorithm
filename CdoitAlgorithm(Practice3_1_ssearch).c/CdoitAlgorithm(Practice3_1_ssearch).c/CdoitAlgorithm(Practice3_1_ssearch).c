#include <stdio.h>
#include <stdlib.h>

int search(const int a[], int n, int key)
{
	int i = 0;
	while (1) {
		if (i == n)
			return -1;
		if (a[i] == key)
			return i;
		i++;
	}
}

int main(void)
{
	int i, nx, key, idx;
	int *x;
	puts("선형 검색");
	printf("요소 개수:");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	for ( i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf_s("%d", &x[i]);
	}
	printf("검색값:");
	scanf_s("%d", &key);
	idx = search(x, nx, key);
	if (idx == -1)
		puts("검색에 실패했습니다");
	else
		printf("%d는 x[%d]에 있습니다.\n", key, idx);
	free(x);

	system("pause");
	return 0;
}