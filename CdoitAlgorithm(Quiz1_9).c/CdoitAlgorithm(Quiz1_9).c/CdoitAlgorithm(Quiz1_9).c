#include <stdio.h>

int sumof(int a, int b) {
	int min;
	int max;
	int result =0; 
	if (a < b) {
	min = a;
	max = b;
}
	else {
		min = b;
		max = a;
	}
	for (int i = min; i <= max; i++) {
		result += i;
	}
	return result;
}

int main(void) {

	int a, b;
	printf("�� ���� ���ڸ� �Է��ϼ���");
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	
	printf("%d", sumof(a, b));
	system("pause");
	return 0;
}