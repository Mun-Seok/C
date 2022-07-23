#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char id,pwd;
	printf("id와 패스워드를 입력해주세요");
	scanf("%c %c", &id, &pwd);
	if (id=='a') {
		if (pwd == 'b') {
			printf("로그인 성공");
		}
		else {
			printf("비밀번호가 맞지 않습니다.");
		}
	}
	else {
		printf("id가 틀렸습니다.");
	}
	return 0;
}