#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char alpha;
	printf("���ڸ� �Է����ּ���:");
	scanf("%c", &alpha);

	if (alpha == 'B') {
		printf("alpha is B.");
	}
	else {
		printf("alpha is not B.");
	}
	return 0;
}