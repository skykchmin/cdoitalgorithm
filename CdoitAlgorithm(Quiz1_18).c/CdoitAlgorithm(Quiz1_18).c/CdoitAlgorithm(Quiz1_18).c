#include <stdio.h>

void nrpira(int n) {
	for (int i = 1; i <= n; i++) {
		putchar(' ');
		for(int j=n; j<=n; j--)

		for (int j = n; j <= (i - 1) * 2 + 1; j--)
				putchar('*');
	}
}

int main(void) {
	int n;
	scanf_s("%d", n);

	nrpira(n);
	return 0;
}