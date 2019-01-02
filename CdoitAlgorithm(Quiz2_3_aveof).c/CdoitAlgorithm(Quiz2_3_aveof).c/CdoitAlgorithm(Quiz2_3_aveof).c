#include <stdio.h>
#include <stdlib.h>

double aveof(const int a[], int n) {
	int i;
	int sum = 0;
	double average = 0.0;
	for (i = 0; i < n; i++) {
		sum += a[i];
	}
	average = sum / n;
	return average;
}
int main(void) {
	int number;
	int *height; // �޸� ������ ù��°�� ��Ÿ����
	printf("������� �Է��ϼ���:");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int)); // ��Ұ��� number ���� �迭�� ����
	printf("%d ����� Ű�� �Է��ϼ���\n ", number);
	for (int i = 0; i < number; i++)
	{
		printf("height[%d]:", i);
		scanf_s("%d", &height[i]);
	}
	printf("Ű�� ��հ��� %.1f �Դϴ�\n", aveof(height, number));
	free(height);

	system("pause");
	return 0;
}