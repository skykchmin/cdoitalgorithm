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
	int *height; // 메모리 공간의 첫번째를 나타낸다
	printf("사람수를 입력하세요:");
	scanf_s("%d", &number);
	height = calloc(number, sizeof(int)); // 요소개수 number 개인 배열을 생성
	printf("%d 사람의 키를 입력하세요\n ", number);
	for (int i = 0; i < number; i++)
	{
		printf("height[%d]:", i);
		scanf_s("%d", &height[i]);
	}
	printf("키의 평균값은 %.1f 입니다\n", aveof(height, number));
	free(height);

	system("pause");
	return 0;
}