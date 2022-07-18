#include <stdio.h>
int main(void) {
	float f = 3.14;
	//경고 C4305 초기화중 double에서 float으로 잘립니다
	//3.14는 8바이트로 double임 
	// 안뜨게 하는 법 2가지
	//float f = 3.14f;
	//float f=(float)3.14;
	printf("%f", f);

	return 0;
}