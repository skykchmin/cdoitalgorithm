#include <stdio.h>
int square(int n){

	printf("사각형을 출력합니다\n");
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
	printf("입력할 수:");
	scanf_s("%d", &n);

	square(n);
	system("pause");
}