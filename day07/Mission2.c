#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int num;
	printf("호텔 등급을 입력해주세요 1,2,3,4:");
	scanf("%d", &num);
	if (num == 1)
		printf("프리미엄 회원입니다.\n");
	else if (num == 2)
		printf("골드 회원입니다.\n");
	else if (num == 3)
		printf("실버 회원입니다.\n");
	else if (num == 4)
		printf("일반 회원입니다.\n");
	switch(num)
	{
		case 1:
			printf("스위트룸이 공짜입니다~\n");
		case 2:
			printf("석식이 공짜입니다~\n");
		case 3:
			printf("수영장이 공짜입니다~\n");
		case 4:
			printf("커피가 공짜입니다~\n");
	}
	return 0;
}