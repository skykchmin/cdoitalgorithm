#include <stdio.h>

int main(void)
{
	int i, n;
	int sum;

	printf("1���� n������ ���� ���մϴ�.");

	printf("n�� �� :");
	scanf_s("%d", &n);

	sum = (n + 1) * (n / 2) + (n % 2 == 1 ? (n + 1) / 2 : 0);

	printf("1���� %d���� ���� %d�Դϴ�.\n", n, sum);

	system("pause");
	return 0;
}