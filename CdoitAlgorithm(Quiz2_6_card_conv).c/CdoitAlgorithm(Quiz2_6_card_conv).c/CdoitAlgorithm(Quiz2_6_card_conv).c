#include <stdio.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

/*--- ���� x�� n ������ ��ȯ�ϰ� �迭 d�� �Ʒ��ڸ����� ���� ---*/
int card_conv(unsigned x, int n, char d[])
{
	int i;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;		/* ��ȯ�� ������ �ڸ��� */

	if (x == 0)								/* 0�̸� */
		d[digits++] = dchar[0];				/* ��ȯ�� ������ 0�� ���� */
	else {									/* 0�� �ƴ϶�� */
		while (x) {
			d[digits++] = dchar[x % n];		
			x /= n;
		}
	}

	for (i = 0; i < digits / 2; i++)
		swap(char, d[i], d[digits - i - 1]);

	return digits;
}



int main(void) {
	int i;
	unsigned no;
	int cd;
	int dno;

	char cno[512];
	int retry;

	puts("10������ ��� ��ȯ�մϴ�.");
	do {
		printf("��ȯ�ϴ� ���� �ƴ� ����:");
		scanf_s("%u", &no);
		do {
			printf("� ������ ��ȯ�ұ��?(2-36) : ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd > 36);
		dno = card_conv(no, cd, cno);
		printf("%d�����δ�", cd);
		for (i = dno - 1; i >= 0; i--)
			printf("%c", cno[i]);
		printf("�Դϴ�.\n");
		printf("�� �� ���ұ��?(1... ��/ 0... �ƴϿ�):");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}