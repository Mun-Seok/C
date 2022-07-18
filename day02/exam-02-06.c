#include <stdio.h>
#define LENGTH 10 //매크로 상수

int main(void) {
	int number = 3;
	const int NUMBER = 5;//심볼릭 상수 선언
	number = 10;//변수는 값을 변경할 수 있다
	//NUMBER = 10;//상수는 값을 변경할 수 없습니다. 변경할 경우 컴파일 에러가 발생합니다.
	printf("%d\n", LENGTH);//메인 프로그램
	printf("%d\n", number);
	printf("%d\n", NUMBER);
	return 0;
}