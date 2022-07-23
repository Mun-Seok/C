#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char alpha;
	printf("문자를 입력해주세요:");
	scanf("%c", &alpha);

	if (alpha == 'B') {
		printf("alpha is B.");
	}
	else {
		printf("alpha is not B.");
	}
	return 0;
}