#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//scanf 함수 보완한 scanf_s 등장으로 scanf 사용할려면 scanf_s
//sdl검사(보안이 강한 함수만 사용가능) 아니오로 해야 실행 가능

// scanf_s ("형식", 값, sizeof (값)) 형식으로 사용

int main(void) {
	//값
	//scanf("형식"&값)
	char str[23];
	//char character;
	int inum;
	float fnum;

	scanf("%s", str);
	//scanf("%c", &character);
	scanf("%d", &inum);
	scanf("%f", &fnum);

	//scanf 함수는 출력 기능을 지니고 있지 않기 때문에 출력은 printf 함수를 이용
	printf("%s %d %f\n", str, inum, fnum);

	return 0;
}