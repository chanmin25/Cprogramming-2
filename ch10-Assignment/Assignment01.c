/*
	���ϸ�: Assignment01 (���̵�: *)
	����: ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����Ͻÿ�. ���̵�� �н������ ���� �ִ� 
	20���ڱ��� �Է��� �� �ִ�. LOGIN ����ü�� ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	�н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *�� ��� ����Ͻÿ�.
	�ۼ���: ������
	��¥: 2025.10.01
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Assignment01.h"

void Am01()
{
	struct LOGIN user1;		// ���� ����
	int i;

	printf("ID? ");
	scanf("%s", &user1.USID);

	printf("Password? ");
	scanf("%s", &user1.USPW);

	printf("ID: %s\n", user1.USID);

	printf("PW: ");
	int PW_len = strlen(user1.USPW);	// ���� ���̸� ����
	for (i = 0; i < PW_len; i++)		// �н����� ���̸�ŭ �ݺ��ϸ鼭 * ���
	{
		printf("*");
	}
	printf("\n");
}

int main()
{
	Am01();
	return 0;
}