#include <stdio.h>

int rectangle(int height, int width) {
	printf("직사각형을 출력합니다.\n");
	

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

	printf("높이를 입력하세요");
	scanf_s("%d", &height);
	printf("너비를 입력하세요");
	scanf_s("%d", &width);

	rectangle(height, width);
	system("pause");
}