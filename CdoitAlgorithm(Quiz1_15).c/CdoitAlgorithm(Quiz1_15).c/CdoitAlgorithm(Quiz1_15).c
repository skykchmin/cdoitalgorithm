#include <stdio.h>

int rectangle(int height, int width) {
	printf("���簢���� ����մϴ�.\n");
	

	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= width; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



int main(void) {
	int height;
	int width;

	printf("���̸� �Է��ϼ���");
	scanf_s("%d", &height);
	printf("�ʺ� �Է��ϼ���");
	scanf_s("%d", &width);

	rectangle(height, width);
	system("pause");
}