#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int maxof(const int a[], int n) {

	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int main(void) {
	int i;
	int *height;
	int number;
	printf("��� ��:");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int));
	srand(time(NULL));
	for (i = 0; i < number; i++) {
		height[i] = 100 + rand() % 90;
		printf("height[%d] = %d\n", i, height[i]);
		printf("�ִ밪�� %d �Դϴ�.\n", maxof(height, number));
		free(height);

		system("pause");
		return 0;
	}
}