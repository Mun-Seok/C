#include <stdio.h>
int main(void) {
	float f = 3.14;
	//��� C4305 �ʱ�ȭ�� double���� float���� �߸��ϴ�
	//3.14�� 8����Ʈ�� double�� 
	// �ȶ߰� �ϴ� �� 2����
	//float f = 3.14f;
	//float f=(float)3.14;
	printf("%f", f);

	return 0;
}