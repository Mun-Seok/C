#include <stdio.h>

int main(void) {
	char cnum = 128;//char���� �ִ��� 127�Դϴ�. 128�� �Ǿ� ������ ��ȯ
	unsigned char u_cnum = 128;
	short snum = 32768;//short���� �ִ��� 32767�Դϴ�.
	unsigned short u_snum = 32768;

	printf("%d\n", cnum);
	printf("%d\n", u_cnum);
	printf("%d\n", snum);
	printf("%d\n", u_snum);

	return 0;
}