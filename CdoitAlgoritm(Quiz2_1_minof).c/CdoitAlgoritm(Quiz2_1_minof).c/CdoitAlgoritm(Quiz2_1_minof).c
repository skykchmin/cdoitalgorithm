#include <stdio.h>
#include <stdlib.h>
int minof(const int a[], int number) {
	int i;
	int min = a[0];
	for (i = 0; i < number; i++) {
		if (a[i] < min)
			min = a[i];

	}
	return min;
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
	printf("�ּҰ��� %d �Դϴ�\n", minof(height, number));
	free(height);

	system("pause");
	return 0;
}