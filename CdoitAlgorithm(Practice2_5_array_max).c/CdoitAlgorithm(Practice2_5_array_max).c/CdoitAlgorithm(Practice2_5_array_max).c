#include <stdio.h>
#include <stdlib.h>
int maxof(const int a[], int number) {
	int i;
	int max = a[0];
	for (i = 0; i < number; i++) {
		if (a[i] > max)
			max = a[i];

	}
	return max;
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
	printf("�ִ밪�� %d �Դϴ�\n", maxof(height, number));
	free(height);

	system("pause");
	return 0;
}