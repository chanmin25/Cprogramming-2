/*
	���ϸ�: Assignment03 (���̵�: **)
	����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�. ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ����
	�Է¹��� �н������ ��ϵ� �н����带 �񱳷��� ������ "�α��� ����"�̶�� ����Ѵ�. LOGIN ����ü �迭�� ũ�Ⱑ 5�� �迭��
	�����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�. 
	�ۼ���: ������
	��¥: 2025.10.01
	����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Assignment03.h"

int login_check(struct LOGIN user[], int size, char* id, char* pw)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (strcmp(id, user[i].USID) == 0 && strcmp(pw, user[i].USPW) == 0)		// ���̵�� �н����尡 ��ġ�ϴ� ���
		return 1;		// ��ġ�ϴ°��� ã������ ����(1)
	}
	return 0;		// ������ ����(0)
}


void Am03()
{
	struct LOGIN user[] = { { "guest", "qwer" } };		// ������ ����� ����ü �迭 �ʱ�ȭ

	int arr_size = sizeof(user) / sizeof(user[0]);		// �迭 ũ�� �ڵ����� ���
	char ID[21];
	char PW[21];

	printf("ID? ");
	scanf("%s", ID);		// %s �� �������� �̸��� ����

	printf("PW? ");
	scanf("%s", PW);		// %s �� �������� �̸��� ����

	if (login_check(user, arr_size, ID, PW) == 1)		// login_check �Լ��� ȣ���Ͽ� ��� Ȯ��
	{
		printf("�α��� ���� \n");
	}
	else
	{
		printf("���̵� �Ǵ� �н����尡 Ʋ�Ƚ��ϴ�. \n");
	}
}

int main()
{
	Am03();
	return 0;
}