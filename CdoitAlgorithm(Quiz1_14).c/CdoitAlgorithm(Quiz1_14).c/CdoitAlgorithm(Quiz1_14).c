#include <stdio.h>
int square(int n){

	printf("�簢���� ����մϴ�\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}


int main(void) {
	int n = 0;
	printf("�Է��� ��:");
	scanf_s("%d", &n);

	square(n);
	system("pause");
}