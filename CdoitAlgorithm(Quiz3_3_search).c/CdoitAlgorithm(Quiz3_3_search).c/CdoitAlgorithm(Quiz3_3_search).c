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
	int no; // ��ġ�ϴ� ����
	int i, nx, key;
	int *x;
	int *idx;
	puts("���� �˻�");
	printf("��� ����:");
	scanf_s("%d", &nx);
	x = calloc(nx, sizeof(int));
	idx = calloc(nx, sizeof(int));

	for (i = 0; i < nx; i++)
	{
		printf("x[%d]:", i);
		scanf_s("%d", &x[i]);
	}
	printf("�˻���:");
	scanf_s("%d", &key);
	no = search_idx(x, nx, key, idx);
	if (no == -1)
		puts("�˻��� �����߽��ϴ�");
	else {
				printf("��ġ�ϴ� ��Ҵ� %d ���Դϴ�.\n", no);
				for (i = 0; i < no; i++)
					printf("x[%d] ", idx[i]);
				putchar('\n');
			
	}
		
	free(x);
	free(idx);

	system("pause");
	return 0;
}