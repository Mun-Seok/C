#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int K, E, M, S, S2;
	printf("���� ���� ���� ��ȸ ���� ������ ���ʴ�� �Է����ּ���.");
	scanf("%d %d %d %d %d", &K, &E, &M, &S, &S2);
	int sum = K + E + M + S + S2;
	float avg = (float)sum / 5;
	printf("���: %f", avg);

	return 0;
}