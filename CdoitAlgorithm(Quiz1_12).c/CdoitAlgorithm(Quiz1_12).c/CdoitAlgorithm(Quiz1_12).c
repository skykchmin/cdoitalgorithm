#include <stdio.h>
void dan(){
	for (int i = 1; i <= 9; i++) {
		printf("%d |", i);
		for (int j = 1; j <= 9; j++) {
			int result;
			result = i * j;
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
	dan();

	system("pause");
	return 0;
}