#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
//scanf �Լ� ������ scanf_s �������� scanf ����ҷ��� scanf_s
//sdl�˻�(������ ���� �Լ��� ��밡��) �ƴϿ��� �ؾ� ���� ����

// scanf_s ("����", ��, sizeof (��)) �������� ���

int main(void) {
	//��
	//scanf("����"&��)
	char str[23];
	//char character;
	int inum;
	float fnum;

	scanf("%s", str);
	//scanf("%c", &character);
	scanf("%d", &inum);
	scanf("%f", &fnum);

	//scanf �Լ��� ��� ����� ���ϰ� ���� �ʱ� ������ ����� printf �Լ��� �̿�
	printf("%s %d %f\n", str, inum, fnum);

	return 0;
}