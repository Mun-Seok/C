#include <stdio.h>

int main(void) {
	char cnum = 128;//char형의 최댓값은 127입니다. 128이 되어 음수로 변환
	unsigned char u_cnum = 128;
	short snum = 32768;//short형의 최댓값은 32767입니다.
	unsigned short u_snum = 32768;

	printf("%d\n", cnum);
	printf("%d\n", u_cnum);
	printf("%d\n", snum);
	printf("%d\n", u_snum);

	return 0;
}