#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char id,pwd;
	printf("id�� �н����带 �Է����ּ���");
	scanf("%c %c", &id, &pwd);
	if (id=='a') {
		if (pwd == 'b') {
			printf("�α��� ����");
		}
		else {
			printf("��й�ȣ�� ���� �ʽ��ϴ�.");
		}
	}
	else {
		printf("id�� Ʋ�Ƚ��ϴ�.");
	}
	return 0;
}