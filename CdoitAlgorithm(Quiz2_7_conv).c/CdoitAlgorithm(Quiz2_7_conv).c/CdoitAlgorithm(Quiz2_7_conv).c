#include <stdio.h>

int card_convr(unsigned x, int n, char d[]) {

	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;		/* ��ȯ�� ������ �ڸ��� */

	if (x == 0)								/* 0�̸� */
		d[digits++] = dchar[0];				/* ��ȯ�� ������ 0�� ���� */
	else {									/* 0�� �ƴ϶�� */
		while (x) {
			printf("%2d | %7d ... %c\n", n, x, dchar[x % n]);
			printf("   + ---------- \n");
			d[digits++] = dchar[x % n];				 /* n���� ���� �������� �־�� */
			x /= n;
		}
		printf("%12d\n", x);
		
		return digits;
	}
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
		dno = card_convr(no, cd, cno);
		printf("%d�����δ�", cd);
		for (i = dno - 1; i >= 0; i--)
			printf("%c", cno[i]);
		printf("�Դϴ�.\n");
		printf("�� �� ���ұ��?(1... ��/ 0... �ƴϿ�):");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
} 