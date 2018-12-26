#include <stdio.h>

void sum(int n) {

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;
	
	}
	printf("%d", sum);
}


int main(void) {
	int n;
	scanf_s("%d", &n);
	sum(n);


	system("pause");
	return 0;
}