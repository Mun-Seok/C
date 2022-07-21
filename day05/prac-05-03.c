#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int K, E, M, S, S2;
	printf("국어 영어 수학 사회 과학 점수를 차례대로 입력해주세요.");
	scanf("%d %d %d %d %d", &K, &E, &M, &S, &S2);
	int sum = K + E + M + S + S2;
	float avg = (float)sum / 5;
	printf("평균: %f", avg);

	return 0;
}