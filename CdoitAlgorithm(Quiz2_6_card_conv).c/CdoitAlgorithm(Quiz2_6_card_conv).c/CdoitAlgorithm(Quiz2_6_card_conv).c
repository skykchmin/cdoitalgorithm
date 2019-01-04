#include <stdio.h>

#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

/*--- 정수 x를 n 진수로 변환하고 배열 d의 아랫자리부터 넣음 ---*/
int card_conv(unsigned x, int n, char d[])
{
	int i;
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int digits = 0;		/* 변환한 다음의 자릿수 */

	if (x == 0)								/* 0이면 */
		d[digits++] = dchar[0];				/* 변환한 다음에 0을 대입 */
	else {									/* 0이 아니라면 */
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

	puts("10진수를 기수 변환합니다.");
	do {
		printf("변환하는 음이 아닌 정수:");
		scanf_s("%u", &no);
		do {
			printf("어떤 진수로 변환할까요?(2-36) : ");
			scanf_s("%d", &cd);
		} while (cd < 2 || cd > 36);
		dno = card_conv(no, cd, cno);
		printf("%d진수로는", cd);
		for (i = dno - 1; i >= 0; i--)
			printf("%c", cno[i]);
		printf("입니다.\n");
		printf("한 번 더할까요?(1... 예/ 0... 아니오):");
		scanf_s("%d", &retry);
	} while (retry == 1);

	return 0;
}