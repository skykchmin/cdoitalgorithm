#include <stdio.h>
void plus() {
	for (int i = 1; i <= 9; i++) {
		printf("%d |", i);
		for (int j = 1; j <= 9; j++) {
			int result;
			result = i + j;
			printf("%d\t", result);

		}
		printf("\n");
	}

}
int main(void) {

	for (int i = 1; i <= 9; i++) {
		printf("%d\t", i);
	}
	printf("\n");
	printf("----+------------------\n");
	plus();

	system("pause");
	return 0;
}