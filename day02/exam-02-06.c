#include <stdio.h>
#define LENGTH 10 //��ũ�� ���

int main(void) {
	int number = 3;
	const int NUMBER = 5;//�ɺ��� ��� ����
	number = 10;//������ ���� ������ �� �ִ�
	//NUMBER = 10;//����� ���� ������ �� �����ϴ�. ������ ��� ������ ������ �߻��մϴ�.
	printf("%d\n", LENGTH);//���� ���α׷�
	printf("%d\n", number);
	printf("%d\n", NUMBER);
	return 0;
}