#include <stdio.h>
#include <stdlib.h>

int search_idx(const int a[], int n, int key, int idx[])
{
	int i = 0;
	int count = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == key) {
			idx[count++] = i;
			
		}
		
	}
	return count;
}

int main(void)
{
	int no; // 일치하는 갯수
	int i, nx, key;
	int *x;
	int *idx;
	puts("선형 검색");
	printf("요소 개수:");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	idx = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf_s("%d", &x[i]);
	}
	printf("검색값:");
	scanf_s("%d", &key);
	no = search_idx(x, nx, key, idx);
	if (no == -1)
		puts("검색에 실패했습니다");
	else {
				printf("일치하는 요소는 %d 개입니다.\n", no);
				for (i = 0; i < no; i++)
					printf("x[%d] ", idx[i]);
				putchar('\n');
			
	}
		
	free(x);
	free(idx);

	system("pause");
	return 0;
}