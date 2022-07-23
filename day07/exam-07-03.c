#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char alpha;
	printf("알파벳을 입력해주세요.");
	scanf("%c", &alpha);

	if (alpha == 'A') {
		printf("alpha is A.\n");
		printf("I like apple.");
	}
	else if (alpha == 'B') {
		printf("alpha is B.\n");
		printf("I like banana.");
	}
	else if (alpha == 'C') {
		printf("alpha is C.\n");
		printf("I like carrot.");
	}
	else {
		printf("I hate fruit & vegetable.");
	}
	return 0;
}